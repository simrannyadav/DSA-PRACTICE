#include<iostream>
using namespace std;

int main(){
//-------------
// 

// row = 3
// col = 3

    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    int i = 1;
    

    while(i <= n){
        int j = 1;
        while(j <= n){
            char ch = 'A' + i + j - 2;
            cout << ch  << "  ";
            j++;
            ch++;
        }
        cout << endl;
        i++;
    }
}
