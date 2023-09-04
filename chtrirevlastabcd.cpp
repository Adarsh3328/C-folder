#include<iostream>
using namespace std;
int main(){
    int n,row=1;
    cout<<"Enter the value"<<endl;
    cin>>n;
    cout<<endl;
    while(row<=n){
        int col=1;
        char ch='A'+n-row;
        while(col<=row){
            cout<<ch;
            ch=ch+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;

    }
    return 0;
}
