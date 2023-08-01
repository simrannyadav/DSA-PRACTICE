#include<iostream>
using namespace std;

int main(){
//-------------
// A B C
// A B C
// A B C

// row = 4
// col = 4

    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    int i = 1;

    while(i <= n){
        int j = 1;
        char ch = 'A';
        while(j <= n){         
            cout << ch  << "  ";
            j++;  
            ch++;         
        }
        cout << endl;
        i++;
    }




    // while(i <= n){
    //     int j = 1;
    //     while(j <= n){
    //         char ch = 'A' + j - 1 ;
    //         cout << ch  << "  ";
    //         j++;
            
    //     }
    //     cout << endl;
    //     i++;
    // }
}
