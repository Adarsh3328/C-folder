#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter the Number"<<endl;
    cout<<endl;
    cin>>n;
    cout<<endl;
    if(n>0){
        cout<<"Number is positive"<<endl;
    }else if(n<0){
        cout<<"Number is negative"<<endl;
    }else{
        cout<<"number is Zero"<<endl;
    }
    return 0;
}