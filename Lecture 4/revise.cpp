#include<iostream>
using namespace std;

//      1 2 3 4 5 5 4 3 2 1 
//      1 2 3 4 * * 4 3 2 1 
//      1 2 3 * * * * 3 2 1 
//      1 2 * * * * * * 2 1 
//      1 * * * * * * * * 1 

int main(){
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;

    int i= 1;
    while(i<=n ){
        int j = 1;
        while(j<=n -i +1){
            cout<<j;
            j++;             
        }     

        j = 1;
        while( j <= (i - 1) * 2 ){
            cout << "*";
            j++;
        }

        j= n-i+1;
        while(j>=1){
            cout<<j;
            j--;
        }
        
        cout<<endl;
        i++;
    }
}




