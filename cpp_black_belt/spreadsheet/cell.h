#pragma once
#include <iostream>
#include <optional>
#include <list>
#include "common.h"
#include "formula.h"

class Cell : public ICell {
public:
    Cell(const ISheet& sheet, std::string str, std::list<std::weak_ptr<Cell>> subscribers);
    virtual Value GetValue() const override;
    virtual std::string GetText() const override;
    virtual std::vector<Position> GetReferencedCells() const override;
    void HandleInsertedRows(int before, int count = 1);
    void HandleInsertedCols(int before, int count = 1);
    void HandleDeletedRows(int first, int count = 1);
    void HandleDeletedCols(int first, int count = 1);
    void CheckCircular(Position self) const;
    
    // Observer part
    void Subscribe(std::weak_ptr<Cell> observer) const;
    void Notify() const;
    const std::list<std::weak_ptr<Cell>>& GetSubscribers() const {
        return subscribers;
    }

    // Subscriber part
    void Update() const;

    virtual ~Cell();
private:
    class CellCache {
    public:
        CellCache() = default;
        void SetValue(Value new_value) {
            value = std::move(new_value);
        }
        bool HasValue() const {
            return value.has_value();
        }
        Value GetValue() const {
            return *value;
        }
        void SetText(std::string new_text) {
            text = std::move(new_text);
        }
        bool HasText() const {
            return text.has_value();
        }
        const std::string& GetText() const {
            return *text;
        }
        void InvalidateValue() {
            value.reset();
        }
        void InvalidateText() {
            text.reset();
        }
        void Invalidate() {
            InvalidateValue(); 
            InvalidateText();
        }
    private:
        std::optional<Value> value;
        std::optional<std::string> text;
    };

    const ISheet& sheet;
    Position pos;
    std::unique_ptr<IFormula> formula;
    mutable CellCache cache;
    mutable std::list<std::weak_ptr<Cell>> subscribers;
};

std::shared_ptr<Cell> MakeCell(const ISheet& sheet, std::string str, Position pos);