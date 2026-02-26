#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double n;

    cout << "Entrer Un nombre Positif et Non Null : ";
    cin >> n;

    if (n < 0) {
        cout << "S'il Vous un nombre Positif";
    } else if (n == 0) {
        cout << "S'il Vous un nombre non NULL ";
    } else {
        cout <<n << " Devient : "<< sqrt(n);
    }
}