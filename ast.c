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
    
    // Print indentation
    for (int i = 0; i < depth; i++)
        printf("  ");
    
    // Print the node name
    printf("(%s", node->name);
    
    if (node->child_count == 0) {
        printf(")\n");
        return;
    }
    
    // Special case for operators like +, -, *, /, >, <, etc.
    if (node->child_count == 2 && (
        strcmp(node->name, "+") == 0 || 
        strcmp(node->name, "-") == 0 ||
        strcmp(node->name, "*") == 0 ||
        strcmp(node->name, "/") == 0 ||
        strcmp(node->name, ">") == 0 ||
        strcmp(node->name, "<") == 0 ||
        strcmp(node->name, ">=") == 0 ||
        strcmp(node->name, "<=") == 0 ||
        strcmp(node->name, "==") == 0 ||
        strcmp(node->name, "!=") == 0 ||
        strcmp(node->name, "AND") == 0 ||
        strcmp(node->name, "OR") == 0 ||
        strcmp(node->name, "=") == 0)) {
        
        // Case where both operands are simple nodes
        if (node->children[0]->child_count == 0 && node->children[1]->child_count == 0) {
            printf(" %s %s)\n", node->children[0]->name, node->children[1]->name);
            return;
        }
        
        // Case where left operand is a nested expression but right is simple
        if (node->children[1]->child_count == 0) {
            printf("\n");
            print_ast(node->children[0], depth + 1);
            for (int i = 0; i < depth + 1; i++)
                printf("  ");
            printf("%s\n", node->children[1]->name);
            for (int i = 0; i < depth; i++)
                printf("  ");
            printf(")\n");
            return;
        }
    }
    
    // Special case for assignment and other binary operators with one simple operand
    if (node->child_count == 2 && 
        strcmp(node->name, "=") == 0 && 
        node->children[0]->child_count == 0) {
        printf(" %s\n", node->children[0]->name);
        print_ast(node->children[1], depth + 1);
        for (int i = 0; i < depth; i++)
            printf("  ");
        printf(")\n");
        return;
    }
    
    // Special case for RET with single simple operand
    if (node->child_count == 1 && node->children[0]->child_count == 0 && 
        (strcmp(node->name, "RET") == 0 || strcmp(node->name, "ARGS") == 0)) {
        printf(" %s)\n", node->children[0]->name);
        return;
    }
    
    printf("\n");
    
    // Print all children
    for (int i = 0; i < node->child_count; i++) {
        print_ast(node->children[i], depth + 1);
    }
    
    // Close the parenthesis
    for (int i = 0; i < depth; i++)
        printf("  ");
    
    printf(")\n");
}
