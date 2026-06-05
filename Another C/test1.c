#include <stdio.h>

int main(){
    int a, b;
    a = 15; // 1111
    b = 88; // 1011000

    printf("%d", a | b);
    printf("\n%d", a & b);
    printf("\n%d",  ~b);
    printf("\n%d",  ~a);
    printf("\n%d", (a ^ b));
    printf("\n%d", a << 2);
    printf("\n%d", a >> 2);

}