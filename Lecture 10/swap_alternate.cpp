#include<iostream>
using namespace std;


// // MY LOGICCC
// void swapAlternate(int arr[],int size){
//     int start = 0;
//     int end = 1;
//     while((end<size) ){
//         if((start != size-1)){
//         swap(arr[start],arr[end]);
//         start+=2;
//         end+=2;
//         cout<<arr<<endl;
//         }
//     }
    
// }

// void printArray(int arr[],int size){
//     for(int i = 0; i < size; i++){
//         cout<<arr[i]<<"  ";    
//     }
// }

// int main(){
//     int size;
//     cout<<"Enter the size of an array: ";
//     cin>>size;

//     int num[100];
//     cout<<"Enter the elements of an array: ";
//     for(int i = 0; i < size; i++){
//         cin>>num[i];
//     }

//     swapAlternate(num,size);
//     printArray(num,size);

//     return 0;
// }



//BABBAR LOGIC

void swapAlternate(int arr[],int size){
    int temp;
    for(int i = 0; i+1 < size; i+=2){
        temp = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = temp;
        //swap(arr[i],arr[i+1]);
        cout<<arr<<endl;
        
    }
    
}

void printArray(int arr[],int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<"  ";    
    }
}

int main(){
    // int size;
    // cout<<"Enter the size of an array: ";
    // cin>>size;

    // int num[100];
    // cout<<"Enter the elements of an array: ";
    // for(int i = 0; i < size; i++){
    //     cin>>num[i];
    // }

    int eve[6]={1,2,3,4,5,6};
    int odd[5]={1,2,3,4,5};
    swapAlternate(eve,6);
    printArray(eve,6);
    swapAlternate(odd,5);
    printArray(odd,5);

    // swapAlternate(num,size);
    // printArray(num,size);

    return 0;
}