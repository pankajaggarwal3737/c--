#include <iostream>
using namespace std;

int main(){

// check pallindrome

    int n;cin>>n;
    char arr[n+1];
    cin>>arr;

    bool check =1;             // u can also write check = true

    for(int i=0;i<n;i++){
        if(arr[i] != arr[n-1-i]){
            check=0;
            break;
        }
    }
    if (check==1){
        cout<<"Word is Pallindrome";
    }
    else{
        cout<<"Word is not a pallindrome";
    }

}