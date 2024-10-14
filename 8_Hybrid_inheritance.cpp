#include <iostream>
using namespace std;

class A{
public:
void f1(){
    cout<<"Vehicle"<<endl;
}

};

class B: public A{
public:
void f2(){
    cout<<"Car"<<endl;
}
};

class C{
    public:
    void f3(){
        cout<<"Racing"<<endl;
    }
};
class D: public B,public C{
public:
void f4(){
    cout<<"Ferrari"<<endl;
}
};


int main(){
   B b;
   D d;
   b.f1();
   b.f2();
   d.f2();
   d.f3();
   d.f4();
  
    return 0;
}