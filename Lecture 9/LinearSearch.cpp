#include<iostream>
using namespace std;

bool LinearSearch(int arr[],int size, int ele){
    for(int i = 0; i < size; i++){
        if(arr[i] == ele){
            return 1;
        }
    }
    return 0;
}
int main(){
    int size, element;
    cout<<"Enter the size of an array: ";
    cin>>size;

    int num[100];
    cout<<"Enter the elements of an array: ";
    for(int i = 0; i < size; i++){
        cin>>num[i];
    }

    // cout<<endl<<"Elements of an array: ";
    // for(int i = 0; i < size; i++){
    //     cout<<num[i]<<"  ";
    // }

    cout<<"Enter the element to search: ";
    cin>>element;

    bool found = LinearSearch(num,size,element);
    if(found){
        cout<<"Element is present";
    }
    else{
        cout<<"Element is absent";
    }
}