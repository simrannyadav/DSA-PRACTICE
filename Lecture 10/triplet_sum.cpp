#include<iostream>
using namespace std;

void pair_sum(int arr[], int size, int s){
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size;j++){
            if(arr[i]+arr[j] == s){
                cout<<min(arr[i],arr[j])<<"  ";
                cout<<max(arr[i],arr[j]);
            }
            else{
                cout<<"No such pair found"<<endl;
                break;
            }
        }
    }

}


