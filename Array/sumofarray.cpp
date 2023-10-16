#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int arrsize=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<arrsize;++i){
        sum=sum+arr[i];
    }
    cout<<"The sum of array"<<" "<<sum<<endl;
    
    return 0;
}