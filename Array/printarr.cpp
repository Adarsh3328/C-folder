#include<iostream>
using namespace std;
int main(){
    int arr[15]={3,4,28};
    int n;
    cout<<"enter the number to print array & the number b/w 0 to 15"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}