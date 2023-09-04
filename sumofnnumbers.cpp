#include<iostream>
using namespace std;
int main(){
    int i=1,sum=0,n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<endl;
    cout<<endl;
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<< "* The answer is"<<endl;
    cout<<"\t "<<sum;
    return 0;


}