//-------------
//    _ _ _ *
//    _ _ * *
//    _ * * *
//    * * * *

// Square matrix
// 1 loop for space and 1 loop for stars
//Space = n - rows
#include<iostream>
using namespace std;

int main(){


    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    int i = 1;

    while(i <= n){

        
        // print space logic
        int space = n - i ;
        while(space){
            cout << "  " ;
            space -- ;
        }

        //print * logic
        int j = 1;
        while(j <= i){           
            cout << "* ";
            j++;          
        }
        
        cout << endl;
        i++;
    }
}

