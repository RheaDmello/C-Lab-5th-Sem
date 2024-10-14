#include <iostream>
using namespace std;

class Parent{
public:
string surname="Dmello";

};

class Rhea: public Parent{
public:
void eat(){
    cout<<"Rhea "<<surname<<endl;
}
};

class Roshal: public Parent{
    public:
    void have(){
        cout<<"Rian "<<surname<<endl;
    }
};

int main(){
   Rhea r;
   Roshal r1;
   r.eat();
   r1.have();
    return 0;
}