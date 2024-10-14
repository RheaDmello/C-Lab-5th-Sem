#include <iostream>
using namespace std;

class A{
public:
string surname="Dmello";

};

class B: public A{
public:
void eat(){
    cout<<"Rhea "<<surname<<endl;
}
};

class C: public B{
    public:
    void have(){
        cout<<"Rian "<<surname<<endl;
    }
};

int main(){
   C c;
   c.eat();
   c.have();
    return 0;
}