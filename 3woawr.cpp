#include<iostream>
using namespace std;
string evenodd(){
int n;
if(n%2==0){
return "even";
}
else{
    return "odd";
}
}
int main(){
    int a,b,c;
    cout<<"Enter 3 values only"<<endl;
    cout<<"enter 1 values"<<endl;
    cin>>a;
    string d=evenodd();
    cout<<d<<endl;
    cout<<"Enter 2 values"<<endl;
    cin>>b;
    string e=evenodd();
    cout<<e;
    cout<<endl;
    cout<<"Enter THE 3 values"<<endl;
    cin>>c;
    string f=evenodd();
    cout<<f;
    return 0;

}