#include<iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    cin>>n;
    do{
        if(i%2==0){
            cout<<"even for"<<" "<<i<<endl;
        }
        else{
            cout<<"odd for"<<" "<<i<<endl;
        }
        i=i+1;
    }
    while(i<=n);
    return 0;
}