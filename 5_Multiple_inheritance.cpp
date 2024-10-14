#include <iostream>
using namespace std;

class A{
public:
void eat1(){
    cout<<"BAAASE 1"<<endl;
}
};

class B{
public:
void eat2(){
    cout<<"BAAASE 2"<<endl;
}
};

class C: public A,public B{
    public:
    void have(){
        cout<<"Derived"<<endl;
    }
};

int main(){
   C c;
   c.eat1();
   c.eat2();
   c.have();
    return 0;
}