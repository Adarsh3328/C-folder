#include<iostream>
using namespace std;
int main(){
  int  n;
  cout<<"Enter AARAY SIZE"<<endl;
  cout<<"Enter given number "<<endl;
  cin>>n;
  int arr[n];
   int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"The sum of array"<<" "<<sum<<endl;

}