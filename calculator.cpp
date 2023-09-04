#include<iostream>
using namespace std;
int main(){
    int a,b;
    char choice,next;
    cout<<"enter two number"<<endl;
    cin>>a>>b;
    do{
        cout<<"Enter operator"<<endl;
        cin>>choice;
        if(choice=='+')
        {
            a=a+b;
        }else if(choice=='-'){
            a=a-b;
        }else if(choice=='*'){
            a=a*b;
        }else if(choice=='/'){
            a=a/b;
        }else if(choice=='%'){
            a=a%b;
        }else{
            cout<<"Invalid input"<<endl;
        } 
         cout<<"enter a another no"<<endl;
        cin>>b;
        cout<<a<<endl;
        cout<<"Do you want to perform another then press y"<<endl;
        cin>>next;
      
    }
    while(next=='y');
    return 0;
}