#include<iostream>
using namespace std;

//////ERROR
int main(){
//-------------
// A
// B C
// C D E 
// D E F G

// row = 3
// col = row no
// Logic : 'A' + i  + j - 2


    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    int i = 0;
    while(i < n){
        char ch = 'A' + i;
        int j = 0;
        while(j <= i){           
            cout << ch  << "  ";
            j++;  
            ch++;         
        }
        cout << endl;
        i++;
    }








    // while(i <= n){
    //     int j = 1;
    //     char ch = 'A' + i  + j - 2 ;
    //     while(j <= i){           
    //         cout << ch  << "  ";
    //         j++;  
    //         ch++;         
    //     }
    //     cout << endl;
    //     i++;
    // }
}
