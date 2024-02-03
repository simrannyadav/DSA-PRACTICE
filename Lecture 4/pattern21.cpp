//-------------
//    * * * *
//    _ * * *
//    _ _ * *
//    _ _ _ *

// space =  row  - 1
#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    int i = n;
    while(i >=1){
        int j = i;
        while (j >=1){
            cout<< "*  ";
            j --;
        }
        i--;
        cout<<endl;
    }

   
    








    // int n;
    // cout << "Enter no of rows: ";
    // cin >> n;
    // int row = 1;

    // while(row <=n ){
    //     int col = 1;
    //     int space = 1;
    // //Print space
    //     while(space <= row){
    //         cout << "  ";
    //         space++;
    //     }
        
    //     while(col <=  n - row + 1) {           
    //         cout << "* ";
    //         col++;          
    //     }
    //     cout << endl;
    //     row++;
    // }
}

