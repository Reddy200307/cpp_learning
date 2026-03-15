/*
9️⃣ Create a hierarchical inheritance example:

Shape
 ├─ Circle
 └─ Rectangle

Calculate area for both.

*/
#include<iostream>
using namespace std;
class Shape{
        protected:
        float area;
};
class Circle:public Shape{
        public:
        Circle(float radius) {
                area=3.14*radius*radius;                
        }
        void print_area(){
                cout<<"The area of a circle is "<<area<<endl;
        }
};
class Rectangle:public Shape{
        public:
        Rectangle(float length,float width) {
                area=length*width;                
        }
        void print_area(){
                cout<<"The area of a Rectangle is "<<area<<endl;
        }
};
int main(){
        Rectangle obj1(20,30);
        Circle obj2(23.556);
        obj1.print_area();
        obj2.print_area();
        return 0;
}
