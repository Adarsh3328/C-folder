#include<iostream>
using namespace std;
int main(){
    int row=1,n;
    cin>>n;
    do{
        int col=1;
        int val=row;
        do{
            cout<<val;
            val=val+1;
            col=col+1;
        }
        while(col<=row);
        row=row+1;
        cout<<endl;
    }
    while(row<=n);
    return 0;
}