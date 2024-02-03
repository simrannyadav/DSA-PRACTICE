//-------------
//    * * * *
//    * * *
//    * *
//    *

// n - row  + 1

#include<iostream>
using namespace std;

int main(){


    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    int i = n;
    while(i >= 1){
        int j = i;
        while(j >=1){
            cout<<"*  ";
            j--;
        }
        i--;
        cout<<endl;
    }





    // while(row > 0){
    
    //     int col = 1;
    //     while(col <= row){           
    //         cout << " * ";
    //         col++;          
    //     }
    //     cout << endl;
    //     row--;
    // }
}

