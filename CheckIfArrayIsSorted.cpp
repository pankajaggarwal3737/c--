 #include <iostream>
using namespace std;

int main(){
    int N; cin >> N;
    int arr[N];

    for(int i =0; i<N; i++) cin >> arr[i];
    bool checker = true;
    for(int i=0; i<N-1; i++){
        if(arr[i]<arr[i+1]){
            checker = true;
            // cout << "sorted" << " ";
        }
        else{
            checker = false; 
            // cout << "not sorted" <<  " ";
            break;
        }
    }

    if(checker == true) cout << "sorted";
    else cout << "Not sorted";
}