#include <stdio.h>

typedef struct {
    int num;
    int sold;  
} ComptBancaire;

void depot(ComptBancaire *compt, int m){
    compt->sold += m;
}

int main(){
    ComptBancaire Mcompt = {789,200};
    printf("Ancien Sold : %d", Mcompt.sold);
    depot(&Mcompt, 689);
    printf("\nNv Sold : %d", Mcompt.sold);
    return 0;
}