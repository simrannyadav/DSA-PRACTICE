#include<iostream>
using namespace std;

int sumofArray(int arr[],int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    return sum;
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

    cout<<endl<<"Elements of an array: ";
    for(int i = 0; i < size; i++){
        cout<<num[i]<<"  ";
    }

    cout<<endl<< "Sum of the array is:  "<<sumofArray(num,size);    






}