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

int main(){
    int size,s;
    cout<<"Enter the size of an array: ";
    cin>>size;

    int num[100];
    cout<<"Enter the elements of an array: ";
    for(int i = 0; i < size; i++){
        cin>>num[i];
    }
    cout<<"Enter the sum: ";
    cin>>s;

    pair_sum(num,size,s);
    return 0;
}