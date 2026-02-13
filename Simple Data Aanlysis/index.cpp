#include <iostream>
#include "Function.hpp"
using namespace std;

int main(){
    int N;

    cout << "Entre the number of array Element : ";
    cin >> N;


    int array[N];
    for (int i = 0; i <= N-1; i++){
        cout << "Entre the number n:"<<i+1<<" of array Element : ";
        cin >> array[i];
    }

    cout<<"the Sum of array Eelment is : " << Sum(array, N);
    cout<<"\nthe Mean of array Eelment is : " << Mean(array, N);
    mintomax(array, N);
    cout << "\nSorted Array (min to max): ";
    for (int i = 0; i < N; i++) {
        cout << array[i] << " "; 
    }
    maxtomin(array, N);
    cout << "\nSorted Array (max to min): ";
    for (int i = 0; i < N; i++) {
        cout << array[i] << " "; 
    }

    return 0;
    
}