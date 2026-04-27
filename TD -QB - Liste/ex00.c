#include <stdio.h>

typedef struct Node{
    int Data;
    struct Node *Next;
} Node;

Node *Initialise(Node *Liste){
    Liste = (Node *) malloc(sizeof(Node));
    return Liste;
}
