#include<iostream>
using namespace std;

int main(){
//-------------
//          1 
//        2 3 
//      4 5 6 
//    7 8 9 10


    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    int row = 1;
    int value = 1;
    while(row <=n ){
        int col = 1;
        int space = 1;
    //Print space
        while(space <= n - row){
            cout << "  ";
            space++;
        }
        
        while(col <=  row ) {           
            cout << value << " ";
            col++;       
            value++;   
        }
        cout << endl;
        row++;
      
    }
}

