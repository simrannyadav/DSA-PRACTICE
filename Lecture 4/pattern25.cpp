#include<iostream>
using namespace std;

int main(){
//-------------
//          1 
//        1 2 1
//      1 2 3 2 1
//    1 2 3 4 3 2 1


// row = 4
// space = n - row/
// half triangle  = printing j

    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    int row = 1;

    while(row <=n ){

    //Print space
        int space = n -  row;
        while(space){
            cout << "  ";
            space -- ;
        }

    // Print 1st🔺
        int col = 1;
        while(col <=  row ) {           
            cout << col << " ";
            col++;          
        }

    // Print 2nd🔺
        //start = row - 1
        int start = row - 1;
        while(start){
            cout<<start <<" ";
            start --;
        }


        cout << endl;
        row++;

      
    }
}

