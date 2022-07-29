#include <iostream>
using namespace std;

int main(){

int a =1;
int *p=&a;       //int *p me int islie lia as jiski value store krega uska data type hi hoga                       
                // * means p me address(&) of a store hoga

cout<<&a<<"\n"<<p<<endl;             //p store krega a ka address

cout<<*p<<"\n";                     // *p store krega a ki value
}