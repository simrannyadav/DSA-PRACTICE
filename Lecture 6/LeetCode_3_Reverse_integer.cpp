//Reverse string;
// Hamming weight --> Take an unsigned integer and return the no of '1' bits it has

//unsigned integer --> 

#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter no : " ;
    cin >> n ;
    int count = 0;

    while(n != 0){
        if ( n & 1){
            count++;
        }
        n = n >> 1;
    }
    cout<< count <<endl;
}