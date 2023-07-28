#include<iostream>
using namespace std;

int main(){
//-------------
//      1 2 3 4 5 5 4 3 2 1 
//      1 2 3 4 * * 4 3 2 1 
//      1 2 3 * * * * 3 2 1 
//      1 2 * * * * * * 2 1 
//      1 * * * * * * * * 1 

// row = 4
// space = n - row
// half triangle  = printing j

    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    int row = 1;

    while(row <= n ){

    //Print 1st 🔺
        int col = 1;
        while(col <=  n - row + 1) {           
            cout << col << " ";
            col++;          
        }

    //Print *
        col = 1;
        while( col <= (row - 1) * 2 ){
            cout << "* ";
            col++ ;
        }

    //  Print 2nd🔺

         col = n - row + 1 ;
         while(col >=1){
            cout << col << " ";
            col -- ;
         }


        cout << endl;
        row++;

      
    }
}

