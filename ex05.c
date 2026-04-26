#include <stdio.h>
#include <string.h>

int main(){
    FILE *f;
    char data[100];
    f = fopen("data.txt", "r");

    fgets(data, sizeof(data) ,f);
    printf("%s", data);
    fclose(f);
}
