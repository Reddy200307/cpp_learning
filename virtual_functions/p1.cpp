#include<iostream>
using namespace std;

class Baseclass{
public:
     virtual void func()=0;
};
void Baseclass::func(){
        {
        cout<<"Base function"<<endl;
    }

}

class DerClass: public Baseclass{
public:
    void func(){
        cout<<"Derived function"<<endl;
    }
};

int main(){

    Baseclass* ptr;
    DerClass obj;

    ptr = &obj;

    ptr->func();

}