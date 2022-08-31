#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    string str = "abcde@fghij";
    
    //converting into upper case
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z')        //this condition is applied so that only alphabets are converted to uppercase 
        str[i]-=32;

    }
    cout<<str;
    
    
    }
