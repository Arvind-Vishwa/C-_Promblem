// Valid palindrome II
#include<iostream>
#include<string>
using namespace std;
bool validPali(string s){
    int i=0;
    int j=s.length()-1;
    while(i <= j){
        if(s[i] == s[j]){
            i++;
            j--;
            return true;
        }
        else if(s[i] != s[j]){
            s.erase(s.begin()+i);
            i++;
            return false;
        }
        
    }return false;
}
int main(){
    string s="deee";
    bool store = validPali(s);
    if(store == true){
        cout<<"It's a Palindrome"<<endl;
    }
    else
    cout<<"Not a Palindrome "<<endl;
}