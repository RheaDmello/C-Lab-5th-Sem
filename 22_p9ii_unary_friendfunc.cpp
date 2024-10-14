/*Write a C++ program to overload unary operator as ii) friend function.*/

#include <iostream>
using namespace std;

class Number{
    public:
    int value;
    Number(int v):value(v){}
    friend Number operator -(Number& n);
    void display(){
        cout<<"Value: "<<value<<endl;
    }
};

Number operator -(Number& n){
    n.value=-n.value;
    return n;
}

int main(){
    Number n1(5);
    cout<<"Before ";
    n1.display();
    -n1;
    cout<<"After ";
    n1.display();
    return 0;
}