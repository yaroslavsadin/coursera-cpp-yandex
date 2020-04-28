#include "ast.h"
#include "FormulaLexer.h"
#include "FormulaParser.h"
#include "FormulaBaseListener.h"

void FormulaBaseListener::enterMain(FormulaParser::MainContext * ctx)  { }
void FormulaBaseListener::exitMain(FormulaParser::MainContext * ctx)  { }

void FormulaBaseListener::enterUnaryOp(FormulaParser::UnaryOpContext * ctx)  { }
void FormulaBaseListener::exitUnaryOp(FormulaParser::UnaryOpContext * ctx)  {
    if(ctx->getText()[0] == '-') {
        auto rhs = std::move(builder.top());
        builder.pop();
        builder.push(
            std::make_unique<Ast::UnaryNode<'-'>>(
                std::move(rhs)
            )
        );
    }
}

void FormulaBaseListener::enterParens(FormulaParser::ParensContext * ctx)  { }
void FormulaBaseListener::exitParens(FormulaParser::ParensContext * ctx)  { }

void FormulaBaseListener::enterCell(FormulaParser::CellContext * ctx)  { }
void FormulaBaseListener::exitCell(FormulaParser::CellContext * ctx)  { 
    /// TODO: 
}

void FormulaBaseListener::enterLiteral(FormulaParser::LiteralContext * ctx)  { }
void FormulaBaseListener::exitLiteral(FormulaParser::LiteralContext * ctx)  { 
    builder.push(
        std::make_unique<Ast::NumberNode>(
            std::atof(ctx->getText().c_str())
        )
    ); 
}

void FormulaBaseListener::enterBinaryOp(FormulaParser::BinaryOpContext * ctx)  { }
void FormulaBaseListener::exitBinaryOp(FormulaParser::BinaryOpContext * ctx)  {
    size_t ttype = FormulaParser::ADD;
    for(; ttype <= FormulaParser::DIV; ttype++) {
        if(auto token = ctx->getToken(ttype,0); token) 
            break;
    }
    auto rhs = std::move(builder.top()); builder.pop();
    auto lhs = std::move(builder.top()); builder.pop();
    switch (ttype)
    {
    case FormulaParser::ADD:
        builder.push(std::make_unique<Ast::BinaryNode<'+'>>(std::move(lhs),std::move(rhs)));
        break;
    case FormulaParser::SUB:
        builder.push(std::make_unique<Ast::BinaryNode<'-'>>(std::move(lhs),std::move(rhs)));
        break;
    case FormulaParser::MUL:
        builder.push(std::make_unique<Ast::BinaryNode<'*'>>(std::move(lhs),std::move(rhs)));
        break;
    case FormulaParser::DIV:
        builder.push(std::make_unique<Ast::BinaryNode<'/'>>(std::move(lhs),std::move(rhs)));
        break;
    default:
        throw std::out_of_range("Wrong binary op");
        break;
    }
}

void FormulaBaseListener::enterEveryRule(antlr4::ParserRuleContext * ctx)  { }
void FormulaBaseListener::exitEveryRule(antlr4::ParserRuleContext * ctx)  { }
void FormulaBaseListener::visitTerminal(antlr4::tree::TerminalNode * /*node*/)  { }
void FormulaBaseListener::visitErrorNode(antlr4::tree::ErrorNode * /*node*/)  { }

namespace Ast {
    void ParseFormula(std::string in) {
        antlr4::ANTLRInputStream input(in);
        FormulaLexer lexer(&input);
        antlr4::CommonTokenStream tokens(&lexer);
        FormulaParser parser(&tokens);
        antlr4::tree::ParseTree* tree = parser.main();
        FormulaBaseListener listener;
        antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);
        std::cout << listener.getAst()->Evaluate(*CreateSheet()) << std::endl;
    }
}