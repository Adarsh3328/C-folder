#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n-row+1){
        cout<<col;
        col=col+1;
        }
        int star=n-col+1;
        while(star){
            cout<<"*";
            star=star-1;
        }
    int l=1;
    while(l<=n-row+1){
        cout<<"*";
        l=l+1;
    }
    int m=1,count=5;
    while(m<=n-row+1){
        cout<<count-row+1;
        m=m+1;
    }
    cout<<endl;
    row=row+1;
    }
    return 0;
}