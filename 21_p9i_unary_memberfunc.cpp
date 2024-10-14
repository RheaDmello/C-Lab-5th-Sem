// /*Write a C++ program to overload unary operator as i) member function*/

#include<iostream>
using namespace std;

class Number{
    public:
    int value;
    Number(int v=0):value(v){}
    Number operator -(){
        return Number(-value);
    }
    void display(){
        cout<<"Value: "<<value<<endl;
    }

};

int main(){
    Number n1(5);
    cout<<"Before ";
    n1.display();
    Number n2=-n1;
    cout<<"After ";
    n2.display();

    return 0;
}