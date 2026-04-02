#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char Password[100];
    int Lower = 0, 
    Upper = 0, 
    Digit = 0, 
    Special = 0;

    printf("Entre The Password : ");
    fgets(Password, sizeof(Password), stdin);
    Password[strcspn(Password, "\n")] = '\0';

    int lenght = strlen(Password);

    for (int i = 0; i < lenght; i++){
        if (isupper(Password[i])){
            Upper = 1;
        } else if (islower(Password[i])){
            Lower = 1;
        } else if (isdigit(Password[i])){
            Digit = 1;
        }
        else 
            Special = 1;
    }

    printf("===== Password Anlaysis =====");

    int score = 0;

    if (lenght >= 8){
        score++;
    }
    if (lenght >= 10){
        score++;
    }
    if (Upper){
        score++;
    }
    if (Lower){
        score++;
   }
    if (Digit){
        score++;
   }
    if (Special){
        score++;
   }

   printf("\nScore :%d ", score);

    if (score <= 2){
        printf("\nWeak");
    } else if (score >= 2 && score <= 5 ){
        printf("\nMeduim ....");
    } else
        printf("\nStrong Password ");


    return 0;
}
