#include<iostream>
using namespace std;

int getMax(int arr[],int n){
    int maxi = INT8_MIN;
    for(int i = 0; i < n; i++){

        maxi = max(maxi,arr[i]);
        // if(max < arr[i]){
        //     max = arr[i];
        // }
    }
    return maxi;
}

int getMin(int arr[],int n){
    int min = INT8_MAX;
    for(int i = 0; i < n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int size;
    cout<<"Enter the size: ";
    cin>>size;

    int num[100];
    cout<<"Enter the elements: ";
    for(int i = 0; i < size; i++){
        cin>>num[i];
    }

    cout<<"Array:: ";
    for(int i = 0; i < size; i++){
        cout<<num[i]<< "  ";
    }
    cout<<endl;

    cout<<"Maximum element in the array is:  "<<getMax(num,size)<<endl;

    cout<<"Minimum element in the array is:  "<<getMin(num,size)<<endl;





}