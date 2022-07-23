#include <iostream>
using namespace std;
int fin(int n){
    int a = 0;
    int b = 1;
    int c;

     for(int i=0;i<=n;i++){
         cout<<a<<endl;
        c=a+b;
        a=b;
        b=c;
    }
    return a;
}
int main(){
    int n;
    cin>>n;
    fin(n);
    return 0;
}