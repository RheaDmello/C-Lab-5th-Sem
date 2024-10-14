#include <iostream>
using namespace std;

class Overloading{
    public:
    int a=10;
    int b=80;
    void func(){
        cout<<a+b<<endl;
    }
    void func(int p,int q){
        cout<<p+q<<endl;
    }
};

int main(){
    Overloading o;
    o.func();
    o.func(2,8);
    
    return 0;
}