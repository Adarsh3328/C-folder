#include<iostream>
using namespace std;
int main(){
    int n,row=1;
    cout<<"enter the value "<<endl;
    cin>>n;
    cout<<endl;
    while(row<=n){
       int space=n-row;
       while(space){
        cout<<" ";
        space=space-1;
       }
       int col=1;
       while(col<=row){
        cout<<"*";
        col=col+1;
       }
       int start=row-1;
       while(start){
        cout<<"*";
        start=start-1;
       }
       cout<<endl;
       row=row+1;
    }
    return 0;
}