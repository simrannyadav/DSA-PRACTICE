#include<iostream>
using namespace std;

int main(){
//-------------
// A
// B B
// C C C

// row = 3
// col = row no
// map row with alphabet
// Logic :  'A' + i - 1

    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    int i = 1;
    

    while(i <= n){
        int j = 1;
        while(j <= i){
            char ch = 'A' + i - 1;
            cout << ch  << "  ";
            j++;           
        }
        cout << endl;
        i++;
    }
}
