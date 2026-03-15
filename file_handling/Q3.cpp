/*
3️⃣ File Modes Write a program that:Creates a file data.txt.Writes numbers 1–5 using ios::out.
Reopen the file using ios::app and add numbers 6–10.Display the contents of the file.Concepts tested:
ios::out ios::app reopening files */
#include<iostream>
#include<fstream>
using namespace std;
int main(){
        ofstream outf("data.txt");
        if(!outf){
                cerr<<"error opening data.txt"<<endl;
                exit(1);
        }
        for(int i=1;i<=5;i++)
                outf<<i<<endl;
        outf.close();
        outf.open("data.txt",ios::app);
        if(!outf){
                cerr<<"error opening data.txt"<<endl;
                exit(1);
        }
        for(int i=6;i<=10;i++)
                outf<<i<<endl;
        outf.close();
        ifstream file("data.txt");
        string str;
        while(file>>str){
                cout<<str<<endl;
        }
        file.close();
        cout<<"Printing data using cat command 😁"<<endl;
        system("cat data.txt");

        return 0;
}