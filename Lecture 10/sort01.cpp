#include<iostream>
using namespace std;

void sort01(int arr[], int size) {
    int i = 0;
    int j = size - 1;
    while (i < j) {
        while (i < j && arr[i] == 0) {
            i++;
        }
        while (i < j && arr[j] == 1) {
            j--;
        }
        if (i < j) { // Swap and move the pointers inward only when i is less than j
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main() {
    int size;
    cout << "Enter the size of an array: ";
    cin>>size;

    int num[100];
    cout << "Enter the elements of an array: ";
    for(int i = 0; i < size; i++) {
        cin >> num[i];
    }

    sort01(num, size); // Sort the array
    cout << "Sorted array: ";
    for(int i = 0; i < size; i++) {
        cout << num[i] << " ";
    }
    cout << endl;
    return 0;
}
