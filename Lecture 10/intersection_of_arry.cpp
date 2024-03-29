//2 Pointer approach

#include<iostream>
using namespace std;

void intersection(int arr1[], int arr2[], int size1, int size2){
    int i = 0, j = 0;
    int lastPrinted = INT8_MIN; 
    while(i < size1 && j < size2){
        if(arr1[i] == arr2[j]){
            if (arr1[i] != lastPrinted) {
                cout << arr1[i] << " ";
                lastPrinted = arr1[i];
            }
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    cout << "end";
}

int main(){
    int size1, size2;
    int num1[100], num2[100];
    cout << "Enter the size of array1: ";
    cin >> size1;

    cout << "Enter the elements of array1: ";
    for(int i = 0; i < size1; i++){
        cin >> num1[i];
    }

    cout << "Enter the size of array2: ";
    cin >> size2;

    cout << "Enter the elements of array2: ";
    for(int i = 0; i < size2; i++){
        cin >> num2[i];
    }

    intersection(num1, num2, size1, size2);

    return 0;
}




//NOT OPTIMIZED

// void intersection(int arr1[],int arr2[], int size1, int size2){
//     // cout<<"Intersection of array are: ";
//     for(int i=0; i<size1;i++){
//         int ele = arr1[i];
//         for(int j=0;j<size2;j++){
//             if(ele<arr2[j]){
//                 break;
//             }
//             if(ele == arr2[j]){
//                 cout<<ele<<"  ";
//                 arr2[j] = -1;
//                 break;
//             }
//         }
//     }
// }

// int main(){
//     int size1,size2;
//     int num1[100],num2[100];
//     cout<<"Enter the size of an array1: ";
//     cin>>size1;

//     cout<<"Enter the elements of an array1: ";
//     for(int i = 0; i < size1; i++){
//         cin>>num1[i];
//     }

//     cout<<"Enter the size of an array2: ";
//     cin>>size2;

//     cout<<"Enter the elements of an array2: ";
//     for(int i = 0; i < size2; i++){
//         cin>>num2[i];
//     }

//     intersection(num1,num2,size1,size2);

//     return 0;
// }