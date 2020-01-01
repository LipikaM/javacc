/* Generated By:JJTree: Do not edit this line. ASTVarDeclaration.h Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=true,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#pragma once

#include "SimpleNode.h"

class SPLParser;

class ASTVarDeclaration : public SimpleNode {
public: 
           ASTVarDeclaration(int id);
           ASTVarDeclaration(SPLParser *parser, int id);
  virtual ~ASTVarDeclaration();

  /** Accept the visitor. **/
  virtual void jjtAccept(SPLParserVisitor *visitor, void* data) const ;

  friend class Interpret;
  friend class SPLParser;


private:
  int type;
  JJString name;
};

