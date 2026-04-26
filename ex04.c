#include <stdio.h>


int main(){
    FILE *f; 
    char text[100];
    f = fopen("data.txt", "w");
    if (f == NULL){
        printf("Error");
    }

    printf("Entrer le text : ");
    gets(text);
    fprintf(f, "%s", text);
    fclose(f);
}