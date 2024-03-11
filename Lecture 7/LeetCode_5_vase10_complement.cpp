#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int m = n;
    int ans;
    int mask = 0;

    if (n == 0){
        ans = 1;

    }
    else{
        while(m!=0){
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        ans = (~n) & mask;
    }

    cout<<"Complememnt of "<<n<<"is "<<ans;
 }