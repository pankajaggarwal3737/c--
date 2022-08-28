 #include <iostream>
using namespace std;

int main(){
    int N; cin >> N;
    int arr[N];

    for(int i =0; i<N; i++) cin >> arr[i];
    // bool checker = true;

    bool check_1 = true; 
    bool check_2 = true;
    int first = 0;
    int second = 1;
    while(arr[first]==arr[second]){
        first++; second++;
    }
    if(arr[first]<arr[second]){
        for(int i=first; i<N-1; i++){
            if(arr[i]>arr[i+1]) check_1 = false;
        }
    }
    else if(arr[first]>arr[second]){
        for(int i=first; i<N-1; i++){
            if(arr[i]<arr[i+1]) check_2 = false;
        }
    }
    if (check_1 && check_2) cout << "sorted" << endl;
    else cout << "not sorted" << endl;

    // for(int i=0; i<N-1; i++){
    //     if(arr[i]<arr[i+1]){
    //         checker = true;
    //         // cout << "sorted" << " ";
    //     }
    //     else{
    //         checker = false; 
    //         // cout << "not sorted" <<  " ";
    //         break;
    //     }
    // }

    // if(checker == true) cout << "sorted";
    // else cout << "Not sorted";
}