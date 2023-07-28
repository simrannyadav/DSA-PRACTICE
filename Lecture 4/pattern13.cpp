#include<iostream>
using namespace std;

int main(){
//-------------
// A B C
// D E F
// G H I

// row = 3
// col = 3

    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    int i = 1;
    char ch = 'A';

    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << ch  << "  ";
            j++;
            ch++;
        }
        cout << endl;
        i++;
    }
}
