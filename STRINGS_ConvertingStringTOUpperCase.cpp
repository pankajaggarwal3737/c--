#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

    string s = "abcde@fghij";
    
    //converting into upper case
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z')        //this condition is applied so that only alphabets are converted to uppercase 
        s[i]-=32;

    }
    cout<<s<<endl;

    //method  2;

    transform(s.begin(),s.end(),s.begin(),::toupper); // to convert in uppercase

    cout<<s<<endl;
    

    // to convert in lowercase

     transform(s.begin(),s.end(),s.begin(),::tolower); 
    cout<<s;
    
    }
