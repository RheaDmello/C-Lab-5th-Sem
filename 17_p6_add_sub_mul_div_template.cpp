/*Write a C++ program to create a function template that can perform
various arithmetic operations, such as addition, subtraction,
multiplication, and division on two operands. The program should accept
different data types (such as int, float, and double) for the operands and
demonstrate the use of the function template with at least two different
data types*/

#include<iostream>
using namespace std;

template<typename T>
T add (T a, T b){
    return a+b;
}

template <typename T>
T sub(T a, T b)
{
    return a - b;
}

template <typename T>
T mul(T a, T b)
{
    return a * b;
}

template <typename T>
T divide(T a, T b)
{
    if(b==0){
        cout<<"Error: Division by zero"<<endl;
        return 0;
    } else {
        return a / b;
    }
}

int main(){

int a=10,b=5;
cout<<"Integer:"<<endl;
cout<<"Addition: "<<add(a,b)<<endl;
cout<<"Subtraction: "<<sub(a,b)<<endl;
cout<<"Multiplication: "<<mul(a,b)<<endl;
cout<<"Division: "<<divide(a,b)<<endl;

float c = 12.12, d = 6.6;
cout << "Float:" << endl;
cout << "Addition: " << add(c, d) << endl;
cout << "Subtraction: " << sub(c, d) << endl;
cout << "Multiplication: " << mul(c, d) << endl;
cout << "Division: " << divide(c, d) << endl;

double e = 10.10, f = 5.5;
cout << "Double:" << endl;
cout << "Addition: " << add(e, f) << endl;
cout << "Subtraction: " << sub(e, f) << endl;
cout << "Multiplication: " << mul(e, f) << endl;
cout << "Division: " << divide(e, f) << endl;
}