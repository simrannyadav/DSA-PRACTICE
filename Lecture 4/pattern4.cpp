#include<iostream>
using namespace std;

int main(){

//-------------
// 4 3 2 1 
// 4 3 2 1 
// 4 3 2 1 
// 4 3 2 1 

// row = 4
// col = 4
// n- j+1
    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    int i = 1;

    while(i <=n){
        int j = 1;
        while(j <= n){
            cout << n- j + 1<< "  ";
            j++;
        }
        cout << endl;
        i++;
    }
}