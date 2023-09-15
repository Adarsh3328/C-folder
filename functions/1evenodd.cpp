#include<iostream>
using namespace std;
void evenodd(){
    cout<<"enter the number"<<endl;
    int n;
    cin>>n;
    if(n%2==0){
       cout<< "even";
    }
    else{
        cout<<"odd";
    }
}
int main(){
    evenodd();
    return 0;
}
