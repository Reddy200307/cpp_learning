/*
2️⃣ Create a class Vehicle with members speed and fuel.
Derive a class Car and add number_of_doors
*/
#include<iostream>
using namespace std;
class Vehicle{
        protected:
        float fuel;
        int speed;
};
class Car:public Vehicle{
        int number_of_doors;
        public:
        Car(float f1,int s1,int d1){
                fuel=f1;
                speed=s1;
                number_of_doors=d1;              
        }
        void PrintData(){
                cout<<"The details are "<<endl;
                cout<<"Fuel:- "<<fuel<<endl;
                cout<<"Speed "<<speed<<endl;
                cout<<"number of doors "<<number_of_doors<<endl;
        }
};
int main(){
        Car obj1(258.69,25,4);
        obj1.PrintData();
        return 0;
}