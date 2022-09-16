#include <iostream>         
using namespace std;

int getBit(int n,int pos){
    return ((n & (1<<pos))!=0) ;
    }

int setBit(int n,int pos){
    return (n | (1<<pos)) ;
    }



int main(){  
    cout<<getBit(5,2)<<endl;
    cout<<setBit(5,1)<<endl;



    return 0;
}

/* getBit is basically used to find 
the bit on the particular location of the 
binary version of a number !  
example: 5 is 0101
so we are doing 2 times left shifts(<<) so new bits are 0100 
now doing & of original and after shift bits i.e. 0101 & 0100
we did this as we want to find which bit is present at 1st index of 
original bit of 5 i.e. 0101 so we & it with bits that r having 1 at its 1st index 
and rest 0 ->(0100)
so that their resultant & becomes the bit at 1st position of original 
bits of 5

*/