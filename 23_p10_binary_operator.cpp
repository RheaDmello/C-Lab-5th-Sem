#include <iostream>
using namespace std;

class Complex{
    public:
    float real,img;
    Complex(float r,float i):real(r),img(i){}
    Complex operator + (Complex c){
        return Complex(real+c.real,img+c.img);
    }
    Complex operator - (Complex c){
        return Complex(real-c.real,img-c.img);
    }
    void display(){
        cout<<real<<" + "<<img<<" i"<<endl;
    }

};

int main(){
    Complex c1(10,20),c2(50,60);
    Complex sum=c1+c2;
    Complex diff=c1-c2;
    cout<<"Addition: ";
    sum.display();
    cout<<"Subtraction: ";
    diff.display();
    return 0;
}