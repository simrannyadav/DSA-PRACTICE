#include<iostream>
using namespace std;

int main(){
//-------------
//          1 
//        2 2 
//      3 3 3 
//    4 4 4 4


    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    int row = 1;

    while(row <=n ){
        int col = 1;
        int space = 1;
    //Print space
        while(space <= n - row){
            cout << "  ";
            space++;
        }
        
        while(col <=  row ) {           
            cout << row << " ";
            col++;          
        }
        cout << endl;
        row++;
      
    }
}

