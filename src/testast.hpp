#include<iostream>
#include<string>
#include<memory>


using namespace std;

// 所有 AST 的基类
class BaseAST {
 public:
  virtual ~BaseAST() = default;
};

// CompUnit 是 BaseAST
class CompUnitAST : public BaseAST {
 public:
  // 用智能指针管理对象
  std::unique_ptr<BaseAST> func_def;
};

// FuncDef 也是 BaseAST
class FuncDefAST : public BaseAST {
 public:
  std::unique_ptr<BaseAST> func_type;
  std::string ident;
  std::unique_ptr<BaseAST> block;
};

// ...


