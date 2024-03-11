// Bitwise Operator --> works on bit level

// AND --> & -->(Mul)
//  0 0   0
//  0 1   0
//  1 0   0
//  1 1   1


// OR --> |  -->(Add)
//  0 0   0
//  0 1   1
//  1 0   1
//  1 1   1


// NOT --> ~
// 0    1
// 1    0

// XOR --> ^ (DOno me se koi ek 1 hona chahiye, tabh 1 hoga)
//  0 0   0
//  0 1   1
//  1 0   1
//  1 1   0


// Left Shift <<
// bits ko left me shift kar 
// multiply by 2, normally, but not in every case


//Right Shift >>
// bits ko right me shift kar 
// divide by 2, normally, but not in every case


// while performing left/right shift of +ve, padding is done using 0

// while performing left/right shift of -ve, padding is done using compiler which is dependent on compiler

#include<iostream>
using namespace std;

int main(){

    int a = 4 ;
    int b = 6 ;
    
    cout<< " a & b : " << (a&b) <<endl ;
    cout<< " a | b : " << (a|b) <<endl ;
    cout<< " ~ a : " << (~a)  <<endl ;
    cout<< " ~ b  : " << (~b) <<endl ;
    cout<< " a ^ b : " << (a^b) <<endl ;

    cout<< " a >>  1 : " << (a >>  1) <<endl ;
    cout<< " a <<  1 : " << (a <<  1) <<endl ;
    
}










