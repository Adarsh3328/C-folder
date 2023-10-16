#include<iostream>
#include<limits.h>
using namespace std;
int getmax(int num[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
return max;
}
int getmin(int num[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(num[i]<min){
            min=num[i];
        }
    }
return min;
}
int main(){
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int num[100];
    cout<<"Enter the number"<<endl;
    for(int i=0;i<size;i++){
        cin>>num[i];
        cout<<"Enter another Number"<<endl;
    }
    cout<<"max number is: "<<" "<<getmax(num,size)<<endl;
    cout<<"min number is: "<<" "<<getmin(num,size)<<endl;

    return 0;
}
