#include <stdio.h>
#include <string.h>

int main(){
    FILE *src = fopen("data.txt", "r");
    FILE *cp = fopen("copie.txt", "w");

    char data[200];
    fgets(data, sizeof(data), src);
    fputs(data, cp);
    fclose(src);
    fclose(cp);
}