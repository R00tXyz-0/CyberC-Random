#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int Data;
    struct Node *Next;
} Node;

int ListeLenght(Node *Rass){
    int count = 0;
    Node *temp = Rass;

    while (temp != NULL){
        count++;
        temp = temp->Next;
    }
    return count;
}

int main(){
    Node *Head = NULL;
    Node *Liste = (Node *) malloc(sizeof(Node));
    Node *Liste1 = (Node *) malloc(sizeof(Node));
    Node *Liste2 = (Node *) malloc(sizeof(Node));

    Liste->Data = 60;
    Liste1->Data = 70;
    Liste2->Data = 80;

    Head = Liste;
    Liste->Next = Liste1;
    Liste1->Next = Liste2;
    Liste2->Next = NULL;

    int n = ListeLenght(Head);
    printf("%d", n);
};

