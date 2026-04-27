#include <stdio.h>

typedef struct {
        int jour;
        int mois;
        int annee;
    } Date;

    typedef struct {
        char Nom[20];
        float salaire;
        Date dateEmbauche;
    } employe;

int main(){
    employe info = {"Othmane", 6000, {3, 6, 2007}};

    printf("Le Nom : %s", info.Nom);
    printf("\nLe Salaire : %2.f", info.salaire);
    printf("\nDate de naissance : %d/0%d/%d ", info.dateEmbauche.jour, info.dateEmbauche.mois, info.dateEmbauche.annee);
}