#include <stdio.h>
#include <math.h>
typedef struct 
{
    int x;
    int y;
} Point;

typedef struct {
    Point origine;
    Point destination;
}Vecteur;

Point MakePoint(){
    Point p;
    printf("(x) : ");
    scanf("%d", &p.x);
    printf("(y) : ");
    scanf("%d", &p.y);
    return p;
}

Vecteur Vecto(Point a, Point b){
    Vecteur v;
    v.origine = a;
    v.destination = b;
    return v;
}


double norme(Point a, Point b){
    double A;
    int dx = b.x - a.x;
    int dy = b.y - a.y;
    A = sqrt((dx*dx)+(dy*dy));
    return A;
}

int main(){
     
    printf("A(x,y) : ");
    Point A = MakePoint();

    printf("B(x,y) : ");
    Point B = MakePoint();


    Vecteur AB;
    AB = Vecto(A, B);

    double c;
    c = norme(A, B);
    printf("%d", A);
}
