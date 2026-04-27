#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int Data;
    struct Node *Next;
} Node;

Node *AjouterD(Node *Rass, int Datas){
    Node *Lista = (Node *) malloc(sizeof(Node));
    Lista->Data = Datas;
    Lista->Next = Rass;
    return Lista;
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

    Head = AjouterD(Head, 90);

    Node* temp = Head;
    while(temp != NULL){
        printf("\nData: %d", temp->Data);
        temp = temp->Next;
    }

};