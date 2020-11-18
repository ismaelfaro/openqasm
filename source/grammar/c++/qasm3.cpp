#include <iostream>
#include "antlr4-runtime.h"
#include "qasm3Lexer.h"
#include "qasm3Parser.h"

using namespace antlr4;

int main(int , const char **) {
  ANTLRInputStream input(u8"OPENQASM 3;include\"stdgates.inc\";qubit q[3];bit c0;h q[0];c0 = measure q[0];");
  qasm3Lexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  qasm3Parser parser(&tokens);
  tree::ParseTree *tree = parser.program();

  std::cout << tree->toStringTree(&parser) << std::endl;

  return 0;
}