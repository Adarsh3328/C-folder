#include<iostream>
using namespace std;

int main(){
    int n,row=1;
    char choise;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<"enter a and b"<< endl;
    cin >> choise;
    if(choise == 'a'){
    while(row<=n){
        int col=1;
        while(col<=n){
            char ch='A'+col-1;
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        row=row+1;

    }
    }else{
        while(row<=n){
        int col=1;
        while(col<=row){
            char ch='A'+row+col-2;
            cout<<ch;
            col=col+1;
        }
        cout<<endl;
        row=row+1;

    }
    }

    return 0;
}