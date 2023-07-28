#include<iostream>
using namespace std;

int main(){
//-------------
//    * * * *
//    * * *
//    * *
//    *

// n - row  + 1

    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    int row = n;

    while(row > 0){
    
        int col = 1;
        while(col <= row){           
            cout << " * ";
            col++;          
        }
        cout << endl;
        row--;
    }
}

