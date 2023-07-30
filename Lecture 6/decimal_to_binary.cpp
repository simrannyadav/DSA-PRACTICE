//Decimal Base = 10

//1st approach
// / by 2
// store rem in ans
// repeat above 2 steps until (n != 0)
// reverse ans



//2nd approach
// same flow me no digit banana ho to,
// ans = (ans * 10) + digit;
//reverse : ans = (digit * 10^i) + ans; 


// Given an integer no n, return diff btw product of its digit and sum of its digit

// n = 234
// prod = 2* 3* 4 = 24
// sum = 2 +3 + 4 = 9
// diff = 24 - 9 = 15


//kisi bhi no  ka last digit nikalna hai to, rem lo aur chota karna hai to / by 10 kardo 

#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cout << "Enter no : " ;
    cin >> n ;

    int ans = 0;
    int i = 0;

    while(n != 0){
        int digit = n & 1;
        ans = (digit * pow(10, i) ) + ans; 
        n = n >> 1;
        i++;
    }
    cout<< ans;
}
