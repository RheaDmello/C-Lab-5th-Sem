#include <iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;
    void func(){
        cout<<"My name is "<<name<<" I am "<<age<<" years old."<<endl;

    }
};

int main(){
    Person p;
    p.name="Rhea Dmello";
    p.age=20;
    p.func();
    return 0;
}