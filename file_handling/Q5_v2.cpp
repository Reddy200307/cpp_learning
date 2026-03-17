#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;
string toLower(string s){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}
int main(){
    ifstream file("data.txt");
    if(!file){
        cerr<<"Unable to open file\n";
        return 1;
    }
    string search_word, replace_word;
    cout<<"Search word: ";
    cin>>search_word;
    cout<<"Replace word: ";
    cin>>replace_word;
    string line;
    string result;
    string search_lower = toLower(search_word);
    while(getline(file, line)){
        stringstream ss(line);
        string word;
        while(ss >> word){
            string clean = word;
            char punct = 0;
            // detect punctuation at end
            if(ispunct(clean.back())){
                punct = clean.back();
                clean.pop_back();
            }
            if(toLower(clean) == search_lower)
                result += replace_word;
            else
                result += clean;
            if(punct) result += punct;
            result += " ";
        }
        result += "\n";
    }
    file.close();
    ofstream out("data.txt");
    out << result;
    out.close();
    cout<<"Replacement complete.\n";
}