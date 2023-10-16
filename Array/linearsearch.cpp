#include<iostream>
#include<limits.h>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]={2,6,-9,8,54,9,10,12,65,7};
    cout<<"Enter the element to search"<<endl;
    int key;
    cin>>key;
    bool found=search(arr,10,key);
    if(found){
        cout<<"The key is present"<<endl;
    }else{
        cout<<"The key is absent"<<endl;
    }
    return 0;
}