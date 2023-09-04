#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<endl;
    int row=1;
    while(row<=n){
        int space =row-1;
        cout<<" ";
        space=space+1;
    }
    int star=n-row+1;
    while(star){
        cout<<"*";
        star=star-1;
    }
    cout<<endl;
    row=row+1;

    return 0;

}