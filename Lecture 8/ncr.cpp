#include<iostream>
using namespace std;

// nCr = n! / (r!  * (n-r)!)

//nc0=1

int factorial(int n){
    int fact = 1;
    for(int i = 1; i<=n;i++){
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r){
    return (factorial(n)) / ((factorial(r))  * factorial(n-r));
}

int main(){
    int n,r,ncr;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter r: ";
    cin>>r;

    cout<<"nCr =  "<<nCr(n,r);
    
}