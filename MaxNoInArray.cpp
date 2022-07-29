#include <iostream>
using namespace std;

int main(){

    int mx=INT_MIN;
    int n;cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
    }
    cout<<mx<<endl;
}

// 1 2 3 4 5
// MX = 1