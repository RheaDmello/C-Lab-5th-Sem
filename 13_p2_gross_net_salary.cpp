/*Write a C++ program to create an employee class containing following
data members: employee name, employee number, basic, DA, IT, net
salary and calculate the gross salary of the employee*/

#include<iostream>
using namespace std;

class Employee{
public:
string employeename;
int employeeno;
int basic;
int DA;
int IT;
int netsalary;
void inputdetails(){
    cout<<"Enter the Employee Name: "<<endl;
    cin>>employeename;
    cout<<"Enter the Employee Number: "<<endl;
    cin>>employeeno;
    cout<<"Enter the Basic salary: "<<endl;
    cin>>basic;
    cout<<"Enter the Dearness allowance: "<<endl;
    cin>>DA;
    cout<<"Enter the Income Tax: "<<endl;
    cin>>IT;
    cout<<"Enter the Net Salary: "<<endl;
    cin>>netsalary;
}
void gross(){
    netsalary=basic+DA;
    cout<<"Net salary: "<<netsalary<<endl;
    cout<<"Gross Salary="<<netsalary-IT<<endl;
}
};

int main(){
    Employee e;
    e.inputdetails();
    e.gross();

    return 0;
}