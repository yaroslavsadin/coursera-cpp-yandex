#pragma once

#include "object_holder.h"

#include <ostream>
#include <string>
#include <vector>
#include <memory>
#include <unordered_map>

namespace Ast {
  class Statement;
}

class TestRunner;

namespace Runtime {

template <typename T>
class ValueObject;

class Object {
public:
  virtual ~Object() = default;
  virtual void Print(std::ostream& os) = 0;
  virtual bool operator==(const Object& other) { throw std::runtime_error("virtual bool operator=="); };
  virtual bool operator<(const Object& other) { throw std::runtime_error("virtual bool operator<"); };
  virtual bool operator!() { throw std::runtime_error("virtual bool operator!"); };
  virtual operator bool() { throw std::runtime_error("virtual operator bool"); };;
};

template <typename T>
class ValueObject : public Object {
public:
  ValueObject(T v) : value(v) {
  }

  void Print(std::ostream& os) override {
    os << value;
  }

  const T& GetValue() const {
    return value;
  }

  bool operator<(const Object& other) override {
    if(auto* other_ = dynamic_cast<const ValueObject<T>*>(&other); other_) {
      return this->value < other_->value;
    } else {
      throw std::runtime_error("operator<");
    }
  }

  bool operator==(const Object& other) override {
    if(auto* other_ = dynamic_cast<const ValueObject<T>*>(&other); other_) {
      return this->value == other_->value;
    } else {
      throw std::runtime_error("operator==");
    }
  }

  operator bool() {
    return !!*this;
  }
  
  bool operator!() override { 
    if constexpr(std::is_convertible<T,int>::value) {
      return !value;
    } else if(std::is_convertible<T,std::string>::value) {
      return !value.size();
    } else {
      return true;
    }
  };

private:
  T value;
};

using String = ValueObject<std::string>;
using Number = ValueObject<int>;

class Bool : public ValueObject<bool> {
public:
  using ValueObject<bool>::ValueObject;
  void Print(std::ostream& os) override;
};

struct Method {
  std::string name;
  std::vector<std::string> formal_params;
  std::unique_ptr<Ast::Statement> body;
};

class Class : public Object {
public:
  using Vtable = std::unordered_map<std::string_view,Method*>;
  explicit Class(std::string name, std::vector<Method> methods, const Class* parent);
  const Method* GetMethod(const std::string& name) const;
  const std::string& GetName() const;
  void Print(std::ostream& os) override;
  const Vtable* GetVptr() const { return &vtable; }
private:
  std::string name;
  std::vector<Method> methods;
  Vtable vtable;
};

class ClassInstance : public Object {
public:
  explicit ClassInstance(const Class& cls);

  void Print(std::ostream& os) override;

  ObjectHolder Call(const std::string& method, const std::vector<ObjectHolder>& actual_args);
  bool HasMethod(const std::string& method, size_t argument_count) const;

  Closure& Fields();
  const Closure& Fields() const;
private:
  const Class& cls;
  Runtime::Closure fields;
};

void RunObjectsTests(TestRunner& test_runner);

}
