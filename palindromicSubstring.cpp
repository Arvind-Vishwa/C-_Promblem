// Palindromic substring
#include<iostream>
#include<string>
using namespace std;
int expandAround(string str,int i,int j){  // these function expand the i and j to find the palin substring
    int count=0;
    while(i >= 0 && j < str.length() && str[i] == str[j]){
        count++;
        i--;j++;
    }return count;
}
int countSubstring(string s){
    int totalCount =0;
    for(int center =0;center<s.length();center++){
        //odd
        int i=center;           // initialize with the center of string 
        int j=center;
        int oddPalSubString = expandAround(s,i,j);   // storing the odd length in int variable
        //even
        i=center;
        j=center+1;
        int evenPalSubString = expandAround(s,i,j); // storing the even length in int variable
        totalCount = totalCount + oddPalSubString + evenPalSubString; // adding all the even and  odd
    }return totalCount;
}
int main(){
    string s="madam";
    int store = countSubstring(s);
    cout<<store;
}