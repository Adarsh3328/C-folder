#include<iostream>
#include<limits.h>
using namespace std;
void reverse(char arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    } 
}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";   
    }
    cout<<endl;
}
int main(){
    char arr[6]={'A','D','A','R','S','H'};
    char brr[5]={'N','I','K','K','U'};
    reverse(arr,6);
    reverse(brr,5);
    printArray(arr,6);
    printArray(brr,5);
    return 0;
}