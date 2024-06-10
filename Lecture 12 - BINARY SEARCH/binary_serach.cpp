//works only on montononic function

//Time Complexity : O(log N)

#include <iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key){

    int start = 0;
    int end = size - 1;
    int mid = start + (end -start)/2;

    while(start <= end){

        //found
        if(arr[mid] == key){
            return mid;
        }
        //right side logic if key is greater than mid
        if(key > arr[mid]){
            start = mid + 1;
        }
        //left side logic if key is lesser than mid
        else{
            end = mid -1;
        }

        mid = start + (end -start)/2;
    }
    return -1;
}

int main(){
    int evenarr[6] ={2,4,9,12,17,77};
    int oddarr[5] = {3,6,45,67,99};

    int evenindex = BinarySearch(evenarr,6,77);
    cout<<evenindex;

    int oddindex = BinarySearch(oddarr,5,45);
    cout<<oddindex;

}