#include<iostream>
using namespace std;

int main(){

//-------------
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4 

// row = 4
// col = 4

    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    int i = 1;

    while(i <=n){
        int j = 1;
        while(j <= n){
            cout << j<< "  ";
            j++;
        }
        cout << endl;
        i++;
    }
}