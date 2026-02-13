#include <iostream>
#include <cmath>
using namespace std;

int doubel(int x){
    return x * x;
}

int main(){
    int x1, y1;
    int x2, y2;
    int a , b, d;

    cout << "Entre (x1, y1) en cm : ";
    cin >> x1 >> y1;
    cout << "Entre (y2, y2) en cm : ";
    cin >> x2 >> y2;

    a = (x1 - y1);
    b = (x2 - y2);

    d = sqrt(doubel(a) + doubel(b));

    cout << "La Distances entre les points est : " << d << "cm";
    
}