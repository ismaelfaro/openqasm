
// Generated from ../qasm3.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "qasm3Parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by qasm3Parser.
 */
class  qasm3Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(qasm3Parser::ProgramContext *ctx) = 0;
  virtual void exitProgram(qasm3Parser::ProgramContext *ctx) = 0;

  virtual void enterHeader(qasm3Parser::HeaderContext *ctx) = 0;
  virtual void exitHeader(qasm3Parser::HeaderContext *ctx) = 0;

  virtual void enterInclude(qasm3Parser::IncludeContext *ctx) = 0;
  virtual void exitInclude(qasm3Parser::IncludeContext *ctx) = 0;

  virtual void enterStatement(qasm3Parser::StatementContext *ctx) = 0;
  virtual void exitStatement(qasm3Parser::StatementContext *ctx) = 0;

  virtual void enterVariableDeclarationStatement(qasm3Parser::VariableDeclarationStatementContext *ctx) = 0;
  virtual void exitVariableDeclarationStatement(qasm3Parser::VariableDeclarationStatementContext *ctx) = 0;

  virtual void enterType(qasm3Parser::TypeContext *ctx) = 0;
  virtual void exitType(qasm3Parser::TypeContext *ctx) = 0;

  virtual void enterVariableDeclarationList(qasm3Parser::VariableDeclarationListContext *ctx) = 0;
  virtual void exitVariableDeclarationList(qasm3Parser::VariableDeclarationListContext *ctx) = 0;

  virtual void enterVariableDeclaration(qasm3Parser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(qasm3Parser::VariableDeclarationContext *ctx) = 0;

  virtual void enterGateDefinition(qasm3Parser::GateDefinitionContext *ctx) = 0;
  virtual void exitGateDefinition(qasm3Parser::GateDefinitionContext *ctx) = 0;

  virtual void enterParamsList(qasm3Parser::ParamsListContext *ctx) = 0;
  virtual void exitParamsList(qasm3Parser::ParamsListContext *ctx) = 0;

  virtual void enterParamDeclaration(qasm3Parser::ParamDeclarationContext *ctx) = 0;
  virtual void exitParamDeclaration(qasm3Parser::ParamDeclarationContext *ctx) = 0;

  virtual void enterQargsList(qasm3Parser::QargsListContext *ctx) = 0;
  virtual void exitQargsList(qasm3Parser::QargsListContext *ctx) = 0;

  virtual void enterQargDeclaration(qasm3Parser::QargDeclarationContext *ctx) = 0;
  virtual void exitQargDeclaration(qasm3Parser::QargDeclarationContext *ctx) = 0;

  virtual void enterExpression(qasm3Parser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(qasm3Parser::ExpressionContext *ctx) = 0;

  virtual void enterValue(qasm3Parser::ValueContext *ctx) = 0;
  virtual void exitValue(qasm3Parser::ValueContext *ctx) = 0;

  virtual void enterVarType(qasm3Parser::VarTypeContext *ctx) = 0;
  virtual void exitVarType(qasm3Parser::VarTypeContext *ctx) = 0;


};

