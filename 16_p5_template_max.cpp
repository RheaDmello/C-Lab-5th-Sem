/* Write a C++ program to create a class template to find the maximum of
two numbers.The class template should work with different data types
such as int and float.The program should include a member function that
compares the two numbers and returns the maximum. */

#include<iostream> 
using namespace std;

template<typename T>
class Max {
    public:
T findmax(T a, T b){
    return (a>b)?a:b;
}
};

int main(){
    Max<int> m1;
    cout<<m1.findmax(10,20)<<endl;
    
    Max<double> m2;
    cout<<m2.findmax(10.2,11.4)<<endl;
    return 0;
}