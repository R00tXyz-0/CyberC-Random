#include <stdio.h>

typedef struct {
    int Id;
    int Moyenne;
    char nom[20];
} Etudiant;


int main(){
  Etudiant e1 = {1, 15, "Othmane"};
  printf("Id : %d, Name : %s, Moyen : %d", e1.Id, e1.nom, e1.Moyenne);
}