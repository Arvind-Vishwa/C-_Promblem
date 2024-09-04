// Removing adjacent duplicate
#include<iostream>
#include<string>
using namespace std;
string removeAdjacent(string s){
    string ans="";
    int n=s.length();
    for(int i=0;i<n;i++){
        char currentCharacter = s[i];
        if(ans.empty()){
            ans.push_back(currentCharacter);
        }
        else{
            if(currentCharacter == ans.back()){
                ans.pop_back();
            }
            else
            ans.push_back(currentCharacter);
        }
    }return ans;
}
int main(){
string s="abbaca";
string store = removeAdjacent(s);
cout<<store;
}