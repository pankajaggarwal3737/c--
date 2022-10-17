#include <iostream>
using namespace std;

int main(){
    int T; cin >> T;                // t is showing that how many times code has to run
    while(T--){
        int n; cin >> n;
        if(n%2) cout << "Odd hai " << endl;
        else cout << "even hai " << endl;
    }
    
}