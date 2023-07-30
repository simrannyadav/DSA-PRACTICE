//0,1,1,2,3,5,8

// previous 2 no add karke no generate hoga
// n = (n - 1) + (n - 2)

#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter  value of n : " ;
    cin >> n ;
    int firstNo = 0;
    int secondNo = 1;

    cout <<firstNo << "  " <<secondNo << "  ";

    for(int i = 1 ; i <= n ; i++){
        int nextNo = firstNo + secondNo ;
        cout << nextNo << " ";

        firstNo = secondNo ;
        secondNo = nextNo ;

    }

}