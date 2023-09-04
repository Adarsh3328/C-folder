#include<iostream>
using namespace std;
int main(){
    int n,row=1;
    cout<<"Enter the value"<<endl;
    cin>>n;
    cout<<endl;
    while(row<=n){
        int col=1;
        while(col<=row){
            char ch='A'+row+col-2;
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        row=row+1;

    }
    return 0;
}
