#include <iostream>
using namespace std;
 void func(int a,int b){
if(a>b){
    cout<<a<<" is greater"<<endl;
}
else{
    cout<<b<<" is greater"<<endl;
}
 }
 void func(){
    cout<<"Overr"<<endl;
 }

int main(){
   int a,b;
   cin>>a>>b;
   func(a,b);/*function overloading*/
   func();/*function overloading*/
    return 0;
}