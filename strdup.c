#include <stdio.h>
#include <stdlib.h>

int strlen(char *p){
    int i = 0;
    while ( p[i] != '\0'){
        i++;
    }
    return (i);
}


char *strdup(char *c){
    int size;
    char *src, *dest;

    size = strlen(c);
    src = (char *) malloc(size + 1);

    
    if (!src){
        return (NULL);
    }
    dest = src;
    while (*c){
        *src = *c;
        src++;
        c++;
    }
    *src = '\0';
	return (src);
}

int main(){
    char *A = strdup("Hello");
    printf("%s", A);
}