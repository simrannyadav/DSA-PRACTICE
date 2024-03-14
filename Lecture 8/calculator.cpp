#include<iostream>
using namespace std;

int main(){
    int a,b;
    char op;
    cout<<"Ënter value of a: ";
    cin>>a;
    cout<<"Ënter value of b: ";
    cin>>b;
    cout<<"Ënter the operation which you want to perform ";
    cin>>op;

    switch(op){
        case '+':
        cout<<"Addition of"<<a<<"and"<<b <<"is"<<a+b;
        break;

        case '-':
        cout<<"Subtraction of"<<a<<"and"<<b <<"is"<<a-b;
        break;

        case '*':
        cout<<"Multiplication of"<<a<<"and"<<b <<"is"<<a*b;
        break;

        case '/':
        cout<<"Division of"<<a<<"and"<<b <<"is"<<a/b;
        break;

        case '%':
        cout<<"Mod of"<<a <<"  and "<<b <<"  is  "<<a%b;
        break;

        default:
        cout<<"Enter valid operation";
        break;
    }

    

    
}







