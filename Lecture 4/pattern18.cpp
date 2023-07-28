#include<iostream>
using namespace std;

int main(){
//-------------
// D
// C D
// B C D 
// A B C D

// row = 3
// col = row no
// Logic : 'A' + n - i
    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    int i = 1;

    while(i <= n){
        int j = 1;
        char ch = 'A' + n - i ;
        while(j <= i){           
            cout << ch  << "  ";
            j++;  
            ch++;         
        }
        cout << endl;
        i++;
    }
}
