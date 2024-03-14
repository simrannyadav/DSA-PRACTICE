#include<iostream>
using namespace std;


//1--> even
//0--> odd
bool isEven(int num){
    if(num % 2 == 0){
        return 1;
    }
    return 0;
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if (isEven(num)){
        cout<<"Even Number";
    }
    else{
        cout<<"Odd Number";
    }
}