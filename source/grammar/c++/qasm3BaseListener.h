
// Generated from ../qasm3.g4 by ANTLR 4.8

#pragma once


#include "antlr4-runtime.h"
#include "qasm3Listener.h"


/**
 * This class provides an empty implementation of qasm3Listener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  qasm3BaseListener : public qasm3Listener {
public:

  virtual void enterProgram(qasm3Parser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(qasm3Parser::ProgramContext * /*ctx*/) override { }

  virtual void enterHeader(qasm3Parser::HeaderContext * /*ctx*/) override { }
  virtual void exitHeader(qasm3Parser::HeaderContext * /*ctx*/) override { }

  virtual void enterInclude(qasm3Parser::IncludeContext * /*ctx*/) override { }
  virtual void exitInclude(qasm3Parser::IncludeContext * /*ctx*/) override { }

  virtual void enterStatement(qasm3Parser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(qasm3Parser::StatementContext * /*ctx*/) override { }

  virtual void enterVariableDeclarationStatement(qasm3Parser::VariableDeclarationStatementContext * /*ctx*/) override { }
  virtual void exitVariableDeclarationStatement(qasm3Parser::VariableDeclarationStatementContext * /*ctx*/) override { }

  virtual void enterType(qasm3Parser::TypeContext * /*ctx*/) override { }
  virtual void exitType(qasm3Parser::TypeContext * /*ctx*/) override { }

  virtual void enterVariableDeclarationList(qasm3Parser::VariableDeclarationListContext * /*ctx*/) override { }
  virtual void exitVariableDeclarationList(qasm3Parser::VariableDeclarationListContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(qasm3Parser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(qasm3Parser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterGateDefinition(qasm3Parser::GateDefinitionContext * /*ctx*/) override { }
  virtual void exitGateDefinition(qasm3Parser::GateDefinitionContext * /*ctx*/) override { }

  virtual void enterParamsList(qasm3Parser::ParamsListContext * /*ctx*/) override { }
  virtual void exitParamsList(qasm3Parser::ParamsListContext * /*ctx*/) override { }

  virtual void enterParamDeclaration(qasm3Parser::ParamDeclarationContext * /*ctx*/) override { }
  virtual void exitParamDeclaration(qasm3Parser::ParamDeclarationContext * /*ctx*/) override { }

  virtual void enterQargsList(qasm3Parser::QargsListContext * /*ctx*/) override { }
  virtual void exitQargsList(qasm3Parser::QargsListContext * /*ctx*/) override { }

  virtual void enterQargDeclaration(qasm3Parser::QargDeclarationContext * /*ctx*/) override { }
  virtual void exitQargDeclaration(qasm3Parser::QargDeclarationContext * /*ctx*/) override { }

  virtual void enterExpression(qasm3Parser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(qasm3Parser::ExpressionContext * /*ctx*/) override { }

  virtual void enterValue(qasm3Parser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(qasm3Parser::ValueContext * /*ctx*/) override { }

  virtual void enterVarType(qasm3Parser::VarTypeContext * /*ctx*/) override { }
  virtual void exitVarType(qasm3Parser::VarTypeContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

