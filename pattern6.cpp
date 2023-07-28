#include<iostream>
using namespace std;

int main(){

//-------------
// *
// * *
// * * *
// * * * *

// row = 4
// col = row no

    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    int i = 1;

    while(i <=n){
        int j = 1;
        while(j <= i){
            cout << " * ";
            j++;
        }
        cout << endl;
        i++;
    }
}