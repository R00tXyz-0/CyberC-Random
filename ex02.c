#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int Id;
    int Moyenne;
    char nom[20];
    struct date *date1;
} Etudiant;

typedef struct {
    int Jour;
    int Mois;
    int Year;
} date;



int modifyAv(Etudiant *e, int NewAv){
    printf("\nEntre the New Av Mark : ");
    scanf("%d", &NewAv);
    while (NewAv == 0 || NewAv == 20){
        printf("Tryyyyyy againe : ");
        scanf("%d", &NewAv);
    }

    e->Moyenne = NewAv;
    return NewAv;
}

void Afficher(Etudiant e2){

    printf("\nStudent Id : %d", e2.Id);
    printf("\nStudent Name : %s", e2.nom);
    printf("\nStudent Average of Marks : %d", e2.Moyenne);
}

int main(){
    Etudiant e1[3] = { {1, 15, "Othmane"}, 
                    {2, 12, "Othmane2"},
                    {3, 19, "Othmane3"} };

    for (int i = 0; i <= 2; i++) {
        printf("\nStudent Num : %d", i+1);
        printf("\nId : %d", e1[i].Id);
        printf("\nname : %s", e1[i].nom);
        printf("\nAv : %d", e1[i].Moyenne);
    }

    int max;
    max = e1[0].Moyenne;
    for (int i = 1; i <= 2; i++) {
        if (max < e1[i].Moyenne){
            max = e1[i].Moyenne;
        }
        
    }
    printf("\nBest Av : %d", max);

    Afficher(e1[0]);


    printf("\nThe Old Av is : %d", e1->Moyenne);
    int NewAv1 = modifyAv(&e1[1], 17);
    printf("\nNew Av is : %d", NewAv1);

    Etudiant *eliste = malloc(3 * sizeof(Etudiant));
    free(eliste);


    
    // Trier les Etudiants Par Moyene
    int temp;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2 - i - 1 ; i++){
            if (e1[j].Moyenne > e1[i+1].Moyenne){
                temp = e1[j].Moyenne;
                e1[i+1].Moyenne = e1[j].Moyenne;
                e1[i+1].Moyenne = temp;
            }   
        }
    }
    

    int found = 0;
    
    for (int i = 0; i <= 2; i++){ 
    printf("\nEntrer the Id : ");
    scanf("%d", &e1[i].Id);
        Afficher(e1[i]);
        found = 1;
        break;
    }

    if (!found){
        printf("Undifined");
    }    
}