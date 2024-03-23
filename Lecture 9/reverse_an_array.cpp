#include<iostream>
using namespace std;

void reverseArray(int arr[],int size){
    int start = 0;
    int end = size - 1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    

}

void printArray(int arr[],int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<"  ";    
    }
}

int main(){
    int size;
    cout<<"Enter the size of an array: ";
    cin>>size;

    int num[100];
    cout<<"Enter the elements of an array: ";
    for(int i = 0; i < size; i++){
        cin>>num[i];
    }

    reverseArray(num,size);
    printArray(num,size);

    return 0;
}