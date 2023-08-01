#include<iostream>
using namespace std;

int main(){
//-------------
// 1
// 2 1
// 3 2 1
// 4 3 2 1

// row = 4
// col = row no

    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    int i = 1;

    while(i <= n){
        int j = i;
        while(j >=1 ){
            cout << j << "  ";
            j--;
            
        }
        cout << endl;
        i++;
    }

    // while(i <= n){
    //     int j = 1;
    //     while(j <= i){
    //         cout << i - j + 1 << "  ";
    //         j++;
            
    //     }
    //     cout << endl;
    //     i++;
    // }
}