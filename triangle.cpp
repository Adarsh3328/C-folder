#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the numbers of these values a,b & c"<<endl;
    cin>>a>>b>>c;
    cout<<endl;
    if(a+b>c){
        if(b+c>a){
            if(c+a>b){
                cout<<"triangle is valid"<<endl;
            }else{
                cout<<"triangle is invalid"<<endl;
            }
        }else{
            cout<<"triangle is invalid"<<endl;
        }
    }else{
        cout<<"triangle is invalid"<<endl;
    }
    return 0;
}