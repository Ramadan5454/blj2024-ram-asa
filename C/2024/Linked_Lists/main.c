#include <stdio.h>
#include <stdlib.h>

typedef struct TNode {
    int data;                // 2 Felder
    struct TNode *next;      // Zeiger auf den nächsten Knoten
}TNode;


int main(void) {
    TNode *p_new = (TNode*) malloc(sizeof(TNode));
    if (p_new == NULL) {
    }
    p_new -> data = p_new;
    p_new -> next = NULL;
    return 0;
}
