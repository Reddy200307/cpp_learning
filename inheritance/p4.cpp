/*
14️⃣ Create classes:

Shape
Circle
Rectangle

Use a base class pointer to call derived class functions.
*/
#include<iostream>
using namespace std;
class Shape{
  public:
    virtual void print_data()=0;
};
class Circle:public Shape{
  void print_data(){
    cout<<"This is Circle "<<endl;
  }
};
class Rectangle:public Shape{
  void print_data(){
    cout<<"This is Rectangle "<<endl;
  }
};
int main(){
      Shape * ptr1;
      ptr1=new Circle();
      ptr1->print_data();
      delete ptr1;
      ptr1=new Rectangle();
      ptr1->print_data();
      delete ptr1;
      ptr1=nullptr;
        return 0;
}
