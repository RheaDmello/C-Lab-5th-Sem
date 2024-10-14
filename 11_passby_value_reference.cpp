#include <iostream>
using namespace std;

void func(int a,int b){/*Pass by value*/
    cout<<a+b<<endl;
}
int func1(int &x,int &y){
    return x+y;
}

int main(){
    func(2,8);
    int p=8,q=8;
    cout<<func1(p,q)<<endl;
    return 0;
}