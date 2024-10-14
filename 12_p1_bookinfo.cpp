/* Write a C++ program to manage the details of a book in a library. Create
an object of the class and call displayDetails() function to display the
book's information. */

#include<iostream>
using namespace std;
class Book{
    public:
    string bookname="Homosapiens";
    int pages=250;
    float price=900.56;
    string author="Ryan Coleen";
    void displayDetails(){
        cout<<"Name: "<<bookname<<endl;
        cout<<"Pages: "<<pages<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"Author: "<<author<<endl;
    }
    };

int main(){
    Book b;
    b.displayDetails();
    return 0;
}