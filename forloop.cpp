//Writing a code to find the sum of all the numbers till n

#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int sum = 0;
    for (int i=1;i<=n;i++){
    sum = sum + i;
    }
    
    cout<<sum<<endl;
    
}