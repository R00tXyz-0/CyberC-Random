#include <stdio.h>

typedef struct {
    int Num;
    int denum;
} fraction;
 



fraction Somme(fraction p, fraction q){
    fraction result;
    result.Num = p.Num / q.Num;
    result.denum = p.denum / p.denum;

    return result;
}

fraction Multip(fraction p, fraction q){
    fraction result;
    result.Num = p.Num * q.Num;
    result.denum = p.denum * p.denum;

    return result;
}

int pgcd(int a, int b){

    while( b != 0){
        int Modulo = a % b;
        a = b;
        b = Modulo;
    }

    return b;
}

fraction simple(fraction s){
    fraction sim;

    int x;
    x = pgcd(s.Num, s.denum);

    sim.Num /= x;
    sim.denum /= x;

    return s;
}

int main(){
    fraction q,p;

    printf("le Num de (p) : ");
    scanf("%d", &p.Num);
    printf("le denum de (p) : ");
    scanf("%d", &q.denum);

    printf("\nle Num de (q) : ");
    scanf("%d", &p.Num);
    printf("le denum de (q) : ");
    scanf("%d", &q.denum);

    fraction s = Somme(p, q);
    printf("La Somme est : %d/%d", s.Num, s.denum);
    fraction sim = simple(s);
    printf("La Sommes des fraction simplfié est : %d/%d", sim.Num, sim.denum);


    printf("La Multiplication est : ", Multip(p, q));
    printf("La multiplication des fraction simplfie est : ", simple(Multip(p, q)));

}