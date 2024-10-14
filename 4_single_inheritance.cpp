#include <iostream>
using namespace std;

class Animal{
public:
void eat(){
    cout<<"BAAASE";
}
};

class Dog: public Animal{
    public:
    void have(){
        cout<<"Derived"<<endl;
    }
};

int main(){
   Dog d;
   d.have();
   d.eat();
    return 0;
}