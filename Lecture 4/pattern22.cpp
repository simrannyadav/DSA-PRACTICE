#include<iostream>
using namespace std;

int main(){
//-------------
//    1 1 1 1 
//      2 2 2 
//        3 3 
//          4


    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    int row = 1;
    int value = 1;

    while(row <=n ){
        int col = 1;
        int space = 1;
    //Print space
        while(space <= row){
            cout << "  ";
            space++;
        }
        
        while(col <=  n - row + 1) {           
            cout << value << " ";
            col++;          
        }
        cout << endl;
        row++;
        value++;
    }
}

