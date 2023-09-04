#include<iostream>
using namespace std;
int main(){
    char choice;
    while(true){
    cout<<"Number of Program"<<endl;
    cout<<"1 programme"<<endl;
    cout<<"2 programme"<<endl;
    cout<<"3 exit"<<endl;
    cout<<"Enter your choice"<<endl;

switch(choice){
    case '1':
    int n,row=1;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<endl;
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
}
    break;
 int n,row=1;
    cout<<"Enter the value"<<endl;
    cin>>n;
    cout<<endl;
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
    break;
}
    
while(choice !=2);
return 0;
}
