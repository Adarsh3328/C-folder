#include<iostream>
using namespace std;
int main(){
    int i=2,n;
    cin>>n;
    do{
        if(n%i==0){
            cout<<"Not Prime"<<i<<endl;
        }
        else{
            cout<<"Prime for"<<i<<endl;
        }
        i=i+1;
    }
    while(i<n);
    return 0;
}