#include<fstream>
#include<iostream>
using namespace std;
int main(){
        ifstream inf("Sample.dat");
        if(!inf){
                cerr<<"error reading file"<<endl;
                exit(1);
        }
        string str;
        while(inf){
                getline(inf,str);
                cout<<str;
                cout<<endl;

        }

        return 0;
}