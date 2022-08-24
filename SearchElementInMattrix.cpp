#include <iostream>
using namespace std;

int main(){

    int m,n;
    cin>>m>>n;
    int target; cin>>target;

    int mattrix[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mattrix[i][j];
        }
    }
    int r=0, c=n-1;             //1st row (index no, of row=0)
    bool found = false;         //last column(index no. of mth column =m-1)
    while(r<n and c>=0){
        if(mattrix[r][c]==target){
            found = true;
        }
        if(mattrix[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }
    if (found){
        cout<<"Element Found";
    }
    else{
        cout<<"element does not exist";
    }
}