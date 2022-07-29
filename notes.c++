#include <iostream>
using namespace std;

int main(){
    int *p1=new int;
    cin>>*p1;
    int *p2=new int;
    cin>>*p2;
    int *p3=new int;
    cin>>*p3;

    cout<<max(*p1,max(*p2,*p3));
}