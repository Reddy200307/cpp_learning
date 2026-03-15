/*
1️⃣ Write a C++ program with a base class Person containing name and age.
Create a derived class Student that adds a roll number and displays all details.
*/
#include<iostream>
using namespace std;
class Person{
        protected:
        string name;
        int age;
};
class Student:public Person{
        int rollno;
        public:
        Student(string n1,int a1,int r1){
                name=n1;
                age=a1;
                rollno=r1;               
        }
        void PrintData(){
                cout<<"The details are "<<name<<" "<<age<<" "<<rollno<<endl;
        }
};
int main(){
        Student obj1={"Prashu",23,9};
        obj1.PrintData();
        return 0;
}