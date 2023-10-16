#include<iostream>
using namespace std;
int fact(int n){ 
    if(n==1){
        return 1;
    }
    int res=n*fact(n-1);
    return res;
}
int main(){
    int a;
    cin>>a;
    int b=fact(a);
    cout<<b;
    return 0;
}