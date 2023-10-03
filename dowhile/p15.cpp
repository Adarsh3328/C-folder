#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row=1;
    do{
        int col=1;
        do{
            char ch='A'+row-1;
            cout<< ch;
            col=col+1;
        }
        while(col<=row);
        row=row+1;
        cout<<endl;
    }
    while(row<=n);
    return 0;
}