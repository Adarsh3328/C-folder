#include<iostream>
using namespace std;
int main(){
    int arr[100]={0};
    int a[100];
    int b[100]={5};
        for(int i=1;i<100;i++){
        a[i]=5;
        cout<<a[i];
    }
    cout<<endl;
    for(int i=1;i<100;i++){
        cout<<arr[i];
      }
      cout<<endl;
      for(int i=1;i<100;i++){
        cout<<b[i];
      }
        return 0;
}