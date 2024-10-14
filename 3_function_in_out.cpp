#include <iostream>
using namespace std;

class Person{
    public:
    void display(){
        cout<<"Function inside the class"<<endl;
    }
  void display1();
};
void Person :: display1(){
    cout<<"Function outside the class"<<endl;
}

int main(){
   Person p;
   p.display();
   p.display1();
    return 0;
}