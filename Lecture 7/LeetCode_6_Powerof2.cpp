#include<iostream>
#include<math.h>
using namespace std;



// //Brute-Force
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int ans;

//     for(int i = 0; i <= 30; i++){
//         ans = pow(2,i);
//         if (ans == n){
//             ans = 1;
//             break;
//         }
//     }
//     if (ans == 1){
//         cout<<"true";
//     }
//     else{
//         cout<<"false";
//     }

// }









// Improved Brute-Force
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int ans = 1;

    for(int i = 0; i <= 30; i++){
        if (ans == n){
            ans = 1;
            break;
        }
        if(ans < INT8_MAX /2){
           ans = ans * 2;
        }
    }
    if (ans == 1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}