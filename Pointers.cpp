#include <iostream>
using namespace std;

int main(){

    int a=3;
    int* b = &a;    // & (matlab address of) a -> simple:) 
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;    

    cout<<"The value at b is "<<*b<<endl;

}