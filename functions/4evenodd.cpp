#include<iostream>
using namespace std ;
string evenodd(int n){
    if(n%2==0){
        return "Even" ;
    }
    else{
        return "odd" ;
    }
}
int main(){
    int a,b,c,g,l;
    cout<<endl;
    cout<<"Only Check fIVE Values"<<endl;
    cout<<"Enter your 1 values"<<endl;
    cin>>a;
    string d = evenodd(a);
    cout<<"Tis is your result"<<endl;
    cout<<d<<endl;
    cout<<endl;
    cout<<"Enter 2 values number"<<endl;
    cin>>b;
    string e = evenodd(b);
    cout<<"This is Your Result"<<endl;
    cout<<e<<endl;
    cout<<endl;
    cout<<"Enter 3 values"<<endl;
    cin>>c;
    string f = evenodd(c);
    cout<<"This is your result"<<endl;
    cout<<f<<endl;
    cout<<endl;
    cout<<"Enter 4 values"<<endl;
    cin>>g;
    string h = evenodd(g);
    cout<<"This is Your result"<<endl;
    cout<<h<<endl;
    cout<<endl;
    cout<<"Enter your 5 values"<<endl;
    cin>>l;
    string m = evenodd(l);
    cout<<"Thos is your result"<<endl;
    cout<<m<<endl;
    return 0;

}