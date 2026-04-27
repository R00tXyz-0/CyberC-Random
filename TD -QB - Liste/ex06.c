#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int NumData;
    struct Node *Next;
} Node;

Node *InserSpecial(Node *Rass, int Data){
    Node *temp = Rass;
    
    while (temp != NULL){
        if (temp->NumData == Data){
           Node *NvNode = (Node * ) malloc(sizeof(Node));

           NvNode->NumData = 50;
           NvNode->Next = temp->Next;
           temp->Next = NvNode;

           printf("Node Found, inserted new node\n");
            break;
        }
        temp = temp->Next;
    }

    return Rass;
}

int main(){
    Node *Head = NULL;
    Node *Liste = (Node *) malloc(sizeof(Node));
    Node *Liste1 = (Node *) malloc(sizeof(Node));
    Node *Liste2 = (Node *) malloc(sizeof(Node));
    Node *Liste3 = (Node *) malloc(sizeof(Node));
    Node *Liste4 = (Node *) malloc(sizeof(Node));
    Node *Liste5 = (Node *) malloc(sizeof(Node));


    Liste->NumData = 60;
    Liste1->NumData = 100;
    Liste2->NumData = 90;
    Liste3->NumData = 1000;
    Liste4->NumData = 70;
    Liste5->NumData = 30;


    Head = Liste;
    Liste->Next = Liste1;
    Liste1->Next = Liste2;
    Liste2->Next = Liste3;
    Liste3->Next = Liste4;
    Liste4->Next = Liste5;
    Liste5->Next = NULL;

    Head = InserSpecial(Head, 90);

    Node* temp = Head;
    while(temp != NULL){
        printf("\nData: %d", temp->NumData);
        temp = temp->Next;
    }

};