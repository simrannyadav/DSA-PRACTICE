// Given an integer no n, return diff btw product of its digit and sum of its digit

// n = 234
// prod = 2* 3* 4 = 24
// sum = 2 +3 + 4 = 9
// diff = 24 - 9 = 15


//kisi bhi no  ka last digit nikalna hai to, rem lo aur chota karna hai to / by 10 kardo 

#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter no : " ;
    cin >> n ;
    int prod = 1;
    int sum = 0;

    while(n != 0){
        int digit = n % 10;
        prod = prod * digit;
        sum = sum + digit;
        n = n / 10;
    }
    int diff = prod - sum;
    // return diff;
    cout<< prod<<endl<< sum <<endl << diff;
}