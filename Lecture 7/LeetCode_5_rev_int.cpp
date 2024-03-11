reverse an integer

CASE 1 : Normal
CASE 2 : Out of range


#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter no to reverse: " ;
    cin>> n;

    int i = 0;
    int ans =0;

    while(n != 0){
        int rem = n % 10;
        if ((ans > INT8_MAX / 10) || (ans < INT8_MIN / 10)){
            return 0;
        }
        ans = (ans * 10) + rem;
        n = n / 10;
    }
    cout<< "Reversed no : " << ans <<endl;
}