#include<iostream>
#include <fstream>
using namespace std;
int main(){
        ofstream outf("Sample.dat");
        if(!outf){
                cerr<<"Error opening Sample.dat"<<endl;
                return(1);
        }
        outf<<"This is 1st line"<<endl;
        outf<<"This is 2nd line"<<endl;
        return 0;
}