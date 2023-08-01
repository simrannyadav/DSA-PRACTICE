//-------------
// D
// C D
// B C D 
// A B C D

// row = 3
// col = row no
// Logic : 'A' + n - i



#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    int i = 1;
    while(i <= n){
        int j = 1;
        char ch = 'A' + n - i ;
        while(j <= i){           
            cout << ch  << "  ";
            j++;  
            ch++;         
        }
        cout << endl;
        i++;
    }









    // int n;
    // cout << "Enter no of rows: ";
    // cin >> n;
    // int i = 1;

    //  while(i <= n){
    //     int j = n;
    //     char ch = 'A' + j;
    //     while(j >= 1){           
    //         cout << ch  << "  ";
    //         j--;  
    //         ch--;         
    //     }
    //     cout << endl;
    //     i++;
    // }

    // while(i <= n){
    //     int j = 1;
    //     char ch = 'A' + n - i ;
    //     while(j <= i){           
    //         cout << ch  << "  ";
    //         j++;  
    //         ch++;         
    //     }
    //     cout << endl;
    //     i++;
    // }
}






//----------------------------------------------------------------------------------------------------------------
// A  
// B  A  
// C  B  A
// D  C  B  A

    // int n;
    // cout << "Enter no of rows: ";
    // cin >> n;
    // int i = 0;

    //  while(i < n){
    //     int j = i;
    //     char ch = 'A' + j;
    //     while(j >= 0){           
    //         cout << ch  << "  ";
    //         j--;  
    //         ch--;         
    //     }
    //     cout << endl;
    //     i++;
    // }