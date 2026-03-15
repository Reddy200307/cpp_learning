/*
1️⃣ Basic File Output + Exception
Write a program that:Takes a student name and marks from the user.
Writes the data to a file student.txt.
If the file cannot be opened, throw and handle an exception.
Concepts tested:
ofstream
open()
throw, catch */
#include<iostream>
#include<fstream>
using namespace std;
int main(){
        string name;
        float marks;
        cout<<"enter the name and marks of the student"<<endl;
        cin>>name>>marks;
        ofstream outf;
        try{
                outf.open("student.txt",ios::app);
                if(!outf){
                        throw "Error opening file student.txt";
                }        }
        catch(const char * error){
                cerr<<error<<endl;
                exit(1);
        }
        outf<<name<<" "<<marks<<endl;
        outf.close();
        return 0;
}