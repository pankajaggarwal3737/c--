#include <iostream>
using namespace std;
int prime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    // int n;
    // cin>>n;

    // check from 1 to 10 which numbers are prime

    int x; cin >> x;

    for(int i=1; i<x; i++){
        if(prime(i)) cout << i << endl;
    }
    // int i ;
    // for(i = 2;i<n;i++){
    //     if(n%i==0){
    //         cout<<"not prime"<<endl;
    //         break; 
    //     }
    // }
    // if(i==n){
    //     cout<<"prime";
    // }
    

}