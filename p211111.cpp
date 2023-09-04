#include<iostream>
using namespace std;
int main(){
    int row=1,n;
    cout<<"Enter the Number"<<endl;
    cin>>n;
    cout<<endl;
    while(row<=n){
        int col=1;
        while(col<=n){
         cout<<row;
        col=col+1;    
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}