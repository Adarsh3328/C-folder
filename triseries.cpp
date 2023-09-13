#include<iostream>
using namespace std;
void series(int n){
    int n,row=1,count=1;
    while(row<=n){
        int col=1;
        while(col<=row){
        cout<<count<<endl;
        count=count+1;
        col=col+1;
        }
        cout<<endl;
        row=row+1;
        cout<<endl;
    }

}
int main(){
    int a,b,c;
    cout<<"You can print only 3 times"<<endl;
    cout<<"enter 1 values"<<endl;
    cin>>a;
    series(a);


}
