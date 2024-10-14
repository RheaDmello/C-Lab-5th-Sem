#include <iostream>
using namespace std;

class Constructor{
    public:
    int x;
    int y;
    Constructor(){
        cin>>x>>y;
        cout<<"Default buddy "<<endl;
    }
    Constructor(int p,int q){
        cout<<"Parameterised buddy"<<endl;
        x=p;
        y=q;
    }
    void display(){
        cout<<x<<" and "<<y<<endl;
    }
    
};

int main(){
    Constructor c;
    c.display();
    Constructor c1(12,14);
    c1.display();
    return 0;
}