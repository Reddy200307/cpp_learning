/*
2️⃣ File Input + Exception
Write a program that:Reads data from student.txt.Displays the contents.
If the file does not exist, handle the exception and print
"File not found".
Concepts tested:
ifstream
exception handling */
#include<iostream>
#include<fstream>
using namespace std;
int main(){
        ifstream inf;
        try{
                inf.open("student.txt");
                if(!inf){
                        throw "Error reading Student.txt";
                }
        }
        catch(const char * ERROR){
                cerr<<ERROR<<endl;
                exit(1);
        }
        string str;
        while(inf){
                getline(inf,str);
                cout<<str<<endl;
        }
        inf.close();
        return 0;
}