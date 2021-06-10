//
// Created by max on 6/10/21.
//

#ifndef ONE_TREE_H
#define ONE_TREE_H

void tree_show(FILE* f, AstRoot* root);

void tree_show_functions(FILE* f, AstFunctions fns);

void tree_show_function(FILE* f, AstFunction* fn);

void tree_show_arguments(FILE* f, AstArguments args);

void tree_show_block(FILE* f, AstBlock* block);

void tree_show_statement(FILE* f, AstStatement* stmts);

void tree_show_statements(FILE* f, AstStatements* stmts);

#endif //ONE_TREE_H
