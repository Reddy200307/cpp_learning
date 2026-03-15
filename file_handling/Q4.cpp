/*
4️⃣ Random File Access
Write a program that:Stores 5 integers in a file.
Uses seekg() to read the 3rd number directly.Display that number.
Concepts tested:
file pointer
seekg()
*/
#include<iostream>
#include<fstream>
using namespace std;
int main(){
        ofstream wfile("data.txt");
        if(!wfile){
                cerr<<"Error accessing data.txt"<<endl;
                exit(1);
        }
        wfile<<1<<" "<<2<<" "<<3<<" "<<4<<" "<<5<<endl;
        wfile.close();
        ifstream rfile("data.txt");
        if(!rfile){
                cerr<<"Error accessing data.txt"<<endl;
                exit(1);
        }
        rfile.seekg(3,ios::beg);
        int num;
        rfile>>num;
        cout<<"The number at the third position is "<<num<<endl;
        return 0;
}