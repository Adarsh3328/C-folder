#include<iostream>
using namespace std;
int sum(int n){
    //base condition
    if(n==0){
        return 0;
    }
     int res=n+sum(n-1);
     return res;
}
int main(){
   int m=5;
    //recursive case
    int a=sum(m);
    cout<<a;
    return 0;
}