#include<iostream>
using namespace std;
int main(){
    int row=1,n,count=1;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<endl;
    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<count;
            cout<<"\t";
            count=count+1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;


}