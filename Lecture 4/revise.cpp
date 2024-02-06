#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no of rows:";
    cin>>n;
    int i = n;
    while(i>=1){
        int space = n - i;
        //space
        while(space){
            cout<<" ";
            space--;
        }
        int j = 1;
        while(j<=n){
            cout<<"*";
            j++;
        }
    cout<<endl;
    i--;
    }
}




