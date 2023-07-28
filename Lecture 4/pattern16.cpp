#include<iostream>
using namespace std;

int main(){
//-------------
// A
// B C
// D E F

// row = 3
// col = row no
// map row with alphabet


    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    int i = 1;
    char ch = 'A' ;

    while(i <= n){
        int j = 1;
        while(j <= i){           
            cout << ch  << "  ";
            j++;  
            ch++;         
        }
        cout << endl;
        i++;
    }
}
