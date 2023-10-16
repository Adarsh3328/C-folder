#include<iostream>
using namespace std;
int main(){
  int  arr[]={1,2,3,4,5,6,7};
  int n= sizeof(arr)/sizeof(arr[11]);
  // you also choose any number for index,because the  int contain 4 bit 
  // so 16/4- 4 int sum =4*4=16
  //  intsum=16/4=4
  cout<<n;

}