#include<iostream>
using namespace std;
int main(){
    int row=1,n;
    cout<<"Enter the Number"<<endl;
    cout<<endl;
    cin>>n;
    cout<<endl;
    while(row<=n){
        int col=1;
        int val=row;
        while(col<=row){
            cout<<val;
            cout<<"\t";
            val=val+1;
            col=col+1;

        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}