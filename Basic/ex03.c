#include <stdio.h>
#include <string.h>


struct filiere{
    char nomdeF[20];
    int Semstre;
};

struct etudiant {
    char nom[30];
    int note;
    struct filiere f;
};


    struct etudiant T[330];


void Saisie(struct etudiant *e){  

    printf("Entrer Le Nom de L'Etudiants : ");
    scanf("%s", e->nom);

    printf("Entrer Le Nom de L'Etudiants : ");
    scanf("%d", &e->note);

    printf("Entrer La Filliere de L'étudiant : ");
    scanf("%s", &e->f.nomdeF);
    printf("Entrer La Smestre de L'étudiant : ");
    scanf("%s", &e->f.Semstre);
}
void Afficher(struct etudiant e){

    printf("Le Nom de L'Etudiant est : %s", e.nom);
    printf("Entrer Le Nom de L'Etudiants : %s", e.note);
    printf("Entrer La Filliere de L'étudiant : %s", e.f.nomdeF);
    printf("Entrer La Smestre de L'étudiant : S%d", e.f.Semstre);
}

void RechercheEtd(struct etudiant *T, int nb, char *nom){

    int a = 0;

   for (int i = 0; i < nb; i++){
    if (strcmp(nom, T[i].nom) == 0){
        Afficher(T[i]);
        a = 1;
        break;
    }  
}
 if (!a){
        printf("Undifined");
    } 
}
int main(){
    int nb ;


    printf("Combien d'etudiants voulez-vous saisir : ");
    scanf("%s", &nb);

    for (int i = 0; i < nb; i++){
        Saisie(&T[i]);
    }
    
    char nomRecherche[50];
    printf("\nEntrer le Nom a rechercher");
    scanf("%s", &nomRecherche);

    RechercheEtd(T, nb, nomRecherche);

    return 0;

}