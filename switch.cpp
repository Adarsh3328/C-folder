#include<iostream>
using namespace std;
int main(){
    int n,i=2;
    cout<<"1.value is even or odd"<<endl;
    cout<<"2.number is +ve,-ve or zero"<<endl;
    cout<<"3.even number series"<<endl;
    int num;
    cout<<endl;
    cout<<"choose the number above which programe do you Run"<<endl;
    cin>>num;
    switch (num) {
        case 1:
        cout<<"enter a number"<<endl;
        cin>>n;
        if(n%2==0){
            cout<<"even"<<endl;
        }else{
            cout<<"odd"<<endl;
        }
        break;
        case 2:
        cout<<"enter the value"<<endl;
        cin>>n;
        if(n>0){
            cout<<"positive number"<<endl;
        }else if(n<0){
            cout<<"Negative number"<<endl;
        }else{
            cout<<"Number is zero"<<endl;
        }
        break;
        case 3:
        cout<<"Enter the number"<<endl;
        cout<<endl;
        cin>>n;
        while(i<=n){
            cout<<i<<endl;
            i=i+2;
        }
        break;
        default: cout<<"choose the correct option"<<endl;


    }
    return 0;
}