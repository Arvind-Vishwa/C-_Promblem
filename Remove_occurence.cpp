// Reoving string Occurence 
#include<iostream>
#include<string>
using namespace std;
string removeString(string s,string part){
    while(s.find(part) != string::npos){
        s.erase(s.find(part),part.length());
    }return s;
}
int main(){
    string s="abcabccaabc";
    string part="abc";
    string store = removeString(s,part);
    cout<<store;
}