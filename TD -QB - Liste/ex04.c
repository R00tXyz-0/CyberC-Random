#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int Data;
    struct Node *Next;
} Node;

Node *DeletFD(Node *Rass, int Datas){
   Node *temp = Rass;
   Node *Previous = NULL;

   while (temp != NULL){
        if (temp->Data == Datas){
            if (Previous == NULL){
                Rass = temp->Next;
            } else 
                Previous->Next = temp->Next;
            free(temp);
            return Rass;    
        }   
        Previous = temp;
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

    Liste->Data = 60;
    Liste1->Data = 70;
    Liste2->Data = 80;
    Liste3->Data = 90;


    Head = Liste;
    Liste->Next = Liste1;
    Liste1->Next = Liste2;
    Liste2->Next = Liste3;
    Liste3->Next = NULL;

    Head = DeletFD(Head, 60);

    Node* temp = Head;
    while(temp != NULL){
        printf("\nData: %d", temp->Data);
        temp = temp->Next;
    }

};
