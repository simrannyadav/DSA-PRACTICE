#include<iostream>
using namespace std;

int main(){
//--------------------------------

// 1 1 1
// 2 2 2 
// 3 3 3 

// row =3
// every row has row no
// first row 1, second row 2, third row 3....
// col = i, where i = current row

    int n;
    cout << "Enter no of rows: ";
    cin >> n;

    int i = 1;

    while(i <= n){
        int j = 1;
        while(j <=n){
            cout << i <<"  " ;
            j++;
        }
        cout << endl;
        i++;
    }
}

