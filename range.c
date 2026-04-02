#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max){
    int *l, size, i;

    if (min >= max){
        return (NULL);
    } 

    
        size = max - min ;
        l = (int *)malloc(size * sizeof(int));
        if (!l){
            return (NULL);
        }
        i = 0;
        while (i <= size){
            l[i] = min + i;
            i++;
        } 
        return (l);
}


int main(){
    int *o = ft_range(2, 7);
        for (int i = 0; i < 7-2; i++)
        {
            printf("%d", o[i]);
        }
    return 0;
}