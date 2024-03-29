// array me 1 to n-1  number hoga jisme se koi 1 number repeat hoga 

#include<iostream>
using namespace std;

int duplicates(int arr[],int size){
    int ans = 0;
    // XORing all array elements so all becomes 0 and later only duplicate will remain so 
    for(int i = 0 ; i<size ; i++){
        ans = ans ^ arr[i];       
    }

    // XORing all a 
    for(int i = 1 ; i<size ; i++){
        ans = ans ^ i;
    }
    return ans;
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

    cout<<"Duplicates are: "<<duplicates(num,size);
    return 0;
}


































//BRUTE FORCE APPROACH ---> USING COUNT
// #include <iostream>

// void findDuplicates(const int arr[], int size) {
//     bool* visited = new bool[size](); // Initialize all elements to false
//     bool found = false;
//     for (int i = 0; i < size - 1; ++i) {
//         if (visited[i]) // Skip elements already marked as duplicates
//             continue;

//         for (int j = i + 1; j < size; ++j) {
//             if (arr[i] == arr[j]) {
//                 if (!found) {
//                     std::cout << arr[i] << " is duplicated." << std::endl;
//                     found = true;
//                 }
//                 visited[j] = true; // Mark as a duplicate
//             }
//         }
//         found = false; // Reset found flag for next element
//     }
//     delete[] visited; // Free dynamically allocated memory
// }

// int main() {
//     const int arr[] = {1, 4, 98, 99, 22, 2, 3, 4, 5, 2, 6, 7, 8, 9, 1, 4, 4, 77, 98};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     findDuplicates(arr, size);
//     return 0;
// }



