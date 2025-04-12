#ifndef PARSER_H
#define PARSER_H

typedef struct Node Node;

// Node structure for AST
typedef struct Node {
    char* name;
    struct Node** children;
    int child_count;
} Node;

extern Node* root;

Node* create_node(char* name, int child_count, ...);
void print_ast(Node* node, int depth);

// Yacc/Bison declarations
extern int yylex();
extern void yyerror(const char* s);

#endif /* PARSER_H */
