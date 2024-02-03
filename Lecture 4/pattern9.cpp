#include<iostream>
using namespace std;

int main(){

//-------------
// 1
// 2 3
// 3 4 5 
// 4 5 6 7 

// row = 4
// col = row no
// use count

    // int n;
    // cout << "Enter no of rows: ";
    // cin >> n;
    // int i = 1;

    // while(i <=n){
    //     int j = 1;
    //     int value = i;
    //     while(j <= i){
    //         cout << value << " ";
    //         j++;
    //         value++;
    //     }
    //     cout << endl;
    //     i++;
    // }




//HW: WITHOUT USING A VARIABLE

    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    int i = 1;

    while(i <=n){
        int j = 0;
        while(j < i){
            cout << i + j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}