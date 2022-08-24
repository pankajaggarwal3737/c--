#include <iostream>
using namespace std;

int main(){

    int m,n; cin>>m>>n;
    int mattrix[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mattrix[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=i;j<n;j++){
            int temp =mattrix[i][j];
            mattrix[i][j]=mattrix[j][i];
            mattrix[j][i]=temp;
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mattrix[i][j]<<" ";
        }cout<<endl;
    }
    
}

