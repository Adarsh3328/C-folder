#include<iostream>
using namespace std;
int main(){
    int row=1,n;
    char ch='A';
    cin>>n;
    do{
        int col=1;
        do{
            cout<<ch;
            ch=ch+1;
            col=col+1;
        }
        while(col<=n);
        row=row+1;
        cout<<endl;
    }
    while(row<=n);
    return 0;
}