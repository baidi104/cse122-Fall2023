#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 numbers:";
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<"The large number is:"<<a;
    }
    else if(b>a && b>c){
        cout<<"The large number is:"<<b;
    }
    else{
        cout<<"The large number is:"<<c;
    }
}
