// array size = n
// where n = 2m+1 -->which is odd

// 'm' number -> comes twice
// 1 number -> appear once

// eg: m=3
// 3*2+1 = 7 (size)
// |3|7|2|2|7|3|4|
// so 4 is unique

// LOGIC
// a XOR a = 0
// 0 XOR a = a

int unique_ele(int arr[], int size){
    int ans = 0;
    for(int i = 0 ; i<size ; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of an array: ";
    cin>>size;

    int num[100];
    cout<<"Enter the elements of an array: ";
    for(int i = 0; i < size; i++){
        cin>>num[i];
    }

    cout<<"Unique element is: "<<unique_ele(num,size);
    return 0;
}