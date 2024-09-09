#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
void createMapping(unordered_map<char,char>&mapping,string key){
    char start='a';
    for(int i=0;i<key.length();i++){
        // if mapping is not already present
    if(mapping.find(key[i]) == mapping.end()){
        mapping[key[i]] == start;
        start++;
    }
    }
    
}
string useMapping(unordered_map<char,char>&mapping,string message){
    string ans="";
    for(int i=0;i< message.length();i++){
        char mappedCharacter = mapping[message[i]];
        ans.push_back(mappedCharacter);
    }
    return ans;
}
string decodeMessage(string key,string message){
    // create mapping
    unordered_map<char,char>mapping;
    char space=' ';
    mapping[space] = space;
    createMapping(mapping, key);

    //use mapping and decode msg
    string ans = useMapping(mapping,message);
    return ans;
}
int main(){
string key="the quick brown fox jumps over the lazy dog";
string message="vkbs bs t supuv";
string store = decodeMessage(key,message);
cout<<store;
}