#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node{
    int valuer;
    struct Node *Right;
    struct Node *Left;
} Node;

Node* CreateNode(int v){

    Node *Liste1 = (Node *) malloc(sizeof(Node));

    Liste1->valuer = v;
    Liste1->Left = NULL;
    Liste1->Right = NULL;

    return Liste1;
}

Node* ajoute(Node* head, int v) {

    if (head == NULL)
        return CreateNode(v);

    if (v < head->valuer)
    {
        head->Left = ajoute(head->Left, v);
    }
    else if (v > head->valuer)
    {
        head->Right = ajoute(head->Right, v);
    }

    return head;
}

Node* rechercher(Node *r, int x){

    if(r == NULL){
        return NULL;
    }
    if(r->valuer == x){
        return r;
    }
    if(x < r->valuer){
        return rechercher(r->Left, x);
    }
    else{
        return rechercher(r->Right, x);
    }

}

void modifier(Node *r, int ancienne, int nouvelle){
    Node *temp = rechercher(r, ancienne);

    if(temp == NULL){
        printf("inix valor\n");
        return;
    }
    temp->valuer = nouvelle;
}

void Prefixe(Node* hh){

    if (hh == NULL)
        return;

    printf("%d ", hh->valuer);

    Prefixe(hh->Left);
    Prefixe(hh->Right);
}

void Infixe(Node* hh){
    if (hh == NULL)
        return;
    Infixe(hh->Left);
    printf("%d ", hh->valuer);
    Infixe(hh->Right);
}

void Postfixe(Node* hh){

    if (hh == NULL)
        return;

    Postfixe(hh->Left);
    Postfixe(hh->Right);

    printf("%d ", hh->valuer);
}


Node *min(Node *r){
    while(r->Left != NULL){
        r = r->Left;
    }
    return r;
}

Node *suppression(Node *r, int x){
    if(r == NULL){
        return NULL;
    }
    if(x < r->valuer){
        r->Left = suppression(r->Left, x);
    }
    else if(x > r->valuer){
        r->Right = suppression(r->Right, x);
    }
    else{

        if(r->Left == NULL && r->Right == NULL){
            free(r);
            return NULL;
        } else if(r->Left == NULL){
            Node *temp = r->Right;
            free(r);
            return temp;
        } else if(r->Right == NULL){
            Node *temp = r->Left;
            free(r);
            return temp;
        }
        Node *temp = min(r->Right);
        r->valuer = temp->valuer;
        r->Right = suppression(r->Right, temp->valuer);
    }
    return r;
}

int main(){

    Node *Root = NULL;

    Root = ajoute(Root, 50);
    Root = ajoute(Root, 30);
    Root = ajoute(Root, 70);
    Root = ajoute(Root, 20);
    Root = ajoute(Root, 40);
    Root = ajoute(Root, 60);
    Root = ajoute(Root, 80);

    Infixe(Root);
    printf("\n");
    Prefixe(Root);
    printf("\n");
    Postfixe(Root);
    

    if (rechercher(Root, 40) != NULL)
    {
        printf("\n40 Trouvee\n");
    }
    else {
        printf("\n40 Non trouvee");
    }

    if (rechercher(Root, 90) != NULL)
    {
        printf("\n90 Trouvee\n");
    }
    else {
        printf("\n90 Non trouvee");
    }
    
    printf("\nAvant modifier :");
    Infixe(Root);
    modifier(Root, 20, 25);

    printf("\nApres modifier :");
    Infixe(Root);
    printf("\n");

    printf("\nApres supprimer :");
    Infixe(Root);
    printf("\nAvant suppremier :");
    suppression(Root, 40);
    Infixe(Root);
    return 0;
}