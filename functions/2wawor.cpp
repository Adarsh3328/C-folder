#include<iostream>
using namespace std;
void evenodd(int a){
    if(a%2==0){
        cout<<"Even";
    }
    else{
        cout<<"odd";
    }
}
int main(){
    int a,b,c;
    cout<<"Enter the 3 values"<<endl;
    cout<<"Enter 1 values"<<endl;
    cin>>a;
     evenodd(a);
     cout<<endl;
     cout<<"enter 2 values"<<endl;
     cin>>b;
    evenodd(b);
    cout<<endl;
    cout<<"enter 3 values"<<endl;
    cin>>c;
    evenodd(c);
    return 0;
}