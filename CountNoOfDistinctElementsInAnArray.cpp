#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int count=0;
    int arr[n];
    for(int i=0 ;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0; i<n; i++){
        // cout << "i ki value " << i << endl;
        bool flag = true;
        for(int j=0; j<i; j++){
            // cout << "i " << arr[i] << ' ' << "J " << arr[j] << endl;
                    if(arr[j]==arr[i]) {
                flag = false;
                break;
            }
        }
        if(flag == true) count++;
    }
    cout << count << endl;
}