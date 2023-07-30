// Divide no from 2 to (n-1) to check for prime no and make sure rem != 0


// break -- > come out of loop
// continue -- > skip the iteration

#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter no to check for prime or not : " ;
    cin >> n ;
    bool isPrime = 1;

//    for(int i = 2 ; i <= (n-1) ; i++)
    for(int i = 2 ; i < n ; i++){
        if( n % i == 0){
            isPrime = 0;
            break;
        }
    }
    if( isPrime == 0){
        cout<<"Not a Prime No."<<endl;
    }
    else{
        cout<<"Prime No."<<endl;
    }

}