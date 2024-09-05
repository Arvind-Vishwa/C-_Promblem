// Valid palindrome II
#include<iostream>
#include<string>
using namespace std;
bool checkPalindrome(string str,int s,int e){
    if(str[s] != str[e]){
        return false;
    }
    else{
        s++;
        e--;
    }
    return true;
}
bool validPali(string s){
    int i=0;
    int j=s.length()-1;
    while(i <= j){
        if(s[i] == s[j]){
            i++;
            j--;
            
        }
        else{
            bool ansOne = checkPalindrome(s,i+1,j);
            bool ansTwo = checkPalindrome(s,i,j-1);
            bool finalAns = ansOne || ansTwo;
            return finalAns;
        }
        
        
    }return true;
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