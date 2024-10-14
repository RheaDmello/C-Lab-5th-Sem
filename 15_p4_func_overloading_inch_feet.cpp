// Write a C++ program to illustrate function overloading in adding the distance between objects.

#include <iostream>
using namespace std;

void addDistance(int feet1,int inches1,int feet2,int inches2,int &resultfeet,int &resultinches)
{
    resultinches=inches1+inches2;
    resultfeet=feet1+feet2+(resultinches/12);
    resultinches%=12;
}

void addDistance(int feet1,int feet2,int &resultfeet){
    resultfeet=feet1+feet2;
}
int main(){
    int feet1=2,feet2=6,inches1=7,inches2=9;
    int resultfeet,resultinches;
    addDistance(feet1,inches1,feet2,inches2,resultfeet,resultinches);
    cout<<"Adding the 2 distances we get: "<<resultfeet<<" feet "<<resultinches<<" inches"<<endl;
    addDistance(feet1,feet2,resultfeet);
    return 0;
}