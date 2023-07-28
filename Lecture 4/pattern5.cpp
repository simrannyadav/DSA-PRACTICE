#include<iostream>
using namespace std;

int main(){

//-------------
// 1 2 3
// 4 5 6 
// 7 8 9  

// row = 3
// col = 3

    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    int i = 1;
    int count = 1;

    while(i <=n){
        int j = 1;
        while(j <= n){
            cout << count << "  ";
            j++;
            count++;
        }
        cout << endl;
        i++;
    }
}