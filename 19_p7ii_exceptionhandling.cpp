// Write a C++ program to demonstrate the exception handling.

#include <iostream>
using namespace std;

int main(){
    int a=40,b=0;
    try{
        if(b==0){
            throw 0;
        }
        cout<<a/b<<endl;
    }
    catch(int e){
        cout<<"Error: "<<e<<endl;
    }
    return 0;
}