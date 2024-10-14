//single and multiple inheritance example
//Write a C++ program to demonstrate hybrid inheritance

#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    void func1(){
        cout<<"Enter name and age: "<<endl;
        cin>>name>>age;
        cout<<"Name: "<<name<<" Age: "<<age<<endl;
    }
};
class Student:public Person{
    public:
    int studentid;
    void func2(){
        cout<<"Enter Student Id: "<<endl;
        cin>>studentid;
        cout<<"Student Id: "<<studentid<<endl;
    }
};

class Employee:public Person{
    public:
    int eid;
    void func3(){
        cout<<"Enter Employee Id: "<<endl;
        cin>>eid;
        cout<<"Employee Id: "<<eid<<endl;
    }
};

class Parttime:public Student,public Employee{
    public:
    int workhours;
    void func4(){
        cout<<"EnterWorking Hours: "<<endl;
        cin>>workhours;
        cout<<"Working Hours: "<<workhours<<endl;
    }
};
int main(){
    Parttime pt;
    pt.func2();
    pt.func3();
    pt.func4();
    return 0;
}