#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,25,30,15,35,5};
    int max=arr[0];
    max=10;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
    return 0;


}
