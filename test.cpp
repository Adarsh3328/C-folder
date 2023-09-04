#include<iostream>
using namespace std;
int main(){
    int n,row=1;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<endl;
    while(row<=n){
        int col=1;
        while(col<=n){
            char ch='A'+col-1;
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        row=row+1;

    }
    return 0;
}