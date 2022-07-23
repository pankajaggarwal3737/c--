#include <iostream>
using namespace std;
int Prime(int n){
    if(n==1 || n==2) return true;
    for(int i=2; i<n; i++){  
        if(n%i==0){
            return false;
        }
    }
    return true;

}

int main(){
    int n1,n2;
    cin>>n1 >> n2;
    for (int i =n1; i<=n2; i++){
        if(Prime(i)) {                          //prime(i)==true bhi likh sakte h but vo if function ye apne aap hi check kr leta h ki true h ki false, so.. 
            cout << i << endl;
        }
        // cout << Prime(i) << endl;
    }
}

// int main(){
//     for(int i=0; i<10; i++){
        
//         if(i==5){
//             continue;
//         }
//         cout << i << endl;
        
//     }
// }