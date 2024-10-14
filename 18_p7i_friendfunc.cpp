// Write a C++ progam to demonstrate the use of friend function.

#include<iostream>
using namespace std;

class Box{
    public:
    int length;
    Box(int l){
        length=l;
    }
    friend void show(Box b);
};

void show(Box b){
    cout<<"Length: "<<b.length<<endl;
}

int main(){
    Box b(10);
    show(b);
    return 0;
}

