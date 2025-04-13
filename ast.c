#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "parser.h"

Node* create_node(char* name, int child_count, ...) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->name = strdup(name);
    node->child_count = child_count;
    
    if (child_count > 0) {
        node->children = (Node**)malloc(sizeof(Node*) * child_count);
        
        va_list args;
        va_start(args, child_count);
        for (int i = 0; i < child_count; i++) {
            node->children[i] = va_arg(args, Node*);
        }
        va_end(args);
    } else {
        node->children = NULL;
    }

    return node;
}

void print_ast(Node* node, int depth) {
    if (!node)
        return;

    // הזחה לפי עומק
    for (int i = 0; i < depth; i++)
        printf("  ");

    printf("(%s", node->name);

    if (node->child_count == 0) {
        printf(")\n");
        return;
    }

    printf("\n");

    // הדפסת כל הילדים
    for (int i = 0; i < node->child_count; i++) {
        print_ast(node->children[i], depth + 1);
    }

    // סגירת הסוגריים
    for (int i = 0; i < depth; i++)
        printf("  ");
    
    printf(")\n");
}
