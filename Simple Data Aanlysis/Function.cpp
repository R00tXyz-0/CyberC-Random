#include <iostream>
using namespace std;

int Sum(int t[], int n){
    int Somme = 0;
    for (int i = 0; i <= n-1; i++){
        Somme += t[i];
    }
    return Somme;
}

int Mean(int t[], int n){
    int Mean;
    Mean = Sum(t, n) / n;
    return Mean;
}

void mintomax(int* t, int n){
    int i,j, temp;
    for ( i = 0; i < n-1; i++){
        for (j = i + 1; j < n; j++){
            if(t[j] > t[i]){
                i = j;
            }
            temp = t[i];
            t[i] = t[j];
            t[j] = temp;
        }  
    } 
}

void maxtomin(int* t, int n){
    int i,j, temp;
    for ( i = 0; i < n-1; i++){
        for (j = i + 1; j < n; j++){
            if(t[j] < t[i]){
                i = j;
            }
            temp = t[i];
            t[i] = t[j];
            t[j] = temp;
        }  
    } 
}

int findMin(int* t, int n) {
    int minVal = t[0]; 
    for (int i = 1; i < n; i++) {
        if (t[i] < minVal) {
            minVal = t[i]; 
        }
    }
    return minVal;
}

int findMax(int* t, int n) {
    int maxVal = t[0]; 
    for (int i = 1; i < n; i++) {
        if (t[i] > maxVal) {
            maxVal = t[i]; 
        }
    }
    return maxVal;
}
