#include<iostream>
using namespace std;

int main(){
//-------------
//    _ _ _ *
//    _ _ * *
//    _ * * *
//    * * * *

// Square matrix
// 1 loop for space and 1 loop for stars
//Space = n - rows

    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    int row = 1;

    while(row <= n){
        // print space
        int space = n - row ;
        while(space){
            cout << "  " ;
            space -- ;
        }
        //print *
        int col = 1;
        while(col <= row){           
            cout << "* ";
            col++;          
        }
        cout << endl;
        row++;
    }
}
