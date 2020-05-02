#pragma once

namespace Ast {
    class NumberNode;
    template<char op>
    class UnaryNode;
    template<char op>
    class BinaryNode;
    class CellNode;

    class NodeVisitor {
    public:
        virtual void Visit(const NumberNode& node);
        virtual void Visit(const UnaryNode<'-'>& node);
        virtual void Visit(const UnaryNode<'+'>& node);
        virtual void Visit(const BinaryNode<'+'>& node);
        virtual void Visit(const BinaryNode<'-'>& node);
        virtual void Visit(const BinaryNode<'*'>& node);
        virtual void Visit(const BinaryNode<'/'>& node);
        virtual void Visit(const CellNode& node);
    };
}