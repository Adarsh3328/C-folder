#include <iostream>
using namespace std;
int main(){
    int i=0,sum=0,n;
    cin>>n;
    cout<<endl;
    while(i<=n){
        sum=sum+i;
        i=i++ ;

    }
      cout<<sum;
    return 0;
}