#include<iostream>
using namespace std;

// 0--> not prime
// 1--> prime
bool isPrime(int n){
    for(int i = 2; i<n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    if (isPrime(n)){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not a Prime Number";
    }
    
}