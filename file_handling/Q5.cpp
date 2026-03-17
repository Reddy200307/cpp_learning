/*
5️⃣ 
Write a cpp program to read a file then take a word as input then iterate the whole file and if a certian
word is found it must be replaced with another word

*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    fstream file("data.txt", ios::in | ios::out);
    string word, result;
    string search_word, replace_word;
    cout<<"Search word: ";
    cin>>search_word;
    cout<<"Replace word: ";
    cin>>replace_word;
    while(file >> word){
        if(word == search_word)
            result += replace_word + " ";
        else
            result += word + " ";
        }
    file.clear();
    file.seekp(0);
    file << result;
    file.close();
}