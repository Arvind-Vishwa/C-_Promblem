// garbage total time collection
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int garbageColl(vector<string>&garbage,vector<int>&time){
    int pickP=0;
    int travelP=0;
    int lastHouseP=0;
    int pickM=0;
    int travelM=0;
    int lastHouseM=0;
    int pickG=0;
    int travelG=0;
    int lastHouseG=0;
// moving inside into garbage
    for(int i=0;i<garbage.size();i++){
        string currHouse = garbage[i];
        for(int j=0;j<currHouse.length();j++){
            char presentGar = currHouse[j];  // garbagr type
            if(presentGar == 'P'){
                pickP++;
                lastHouseP=i;
            }
            if( presentGar == 'M'){
                pickM++;
                lastHouseM =i;
            }
            if(presentGar == 'G'){
                pickG++;
                lastHouseG=i;
            }
        }
    }
    // calculating travel time
    for(int i=0;i<lastHouseP;i++){
        travelP = travelP+time[i];
    }
    for(int i=0;i<lastHouseG;i++){
        travelG = travelG +time[i];
    }
    for(int i=0;i<lastHouseM;i++){
        travelM = travelM+time[i];
    }
    int totalPickingTime = pickP + pickM + pickG;
    int totalTravelTime = travelP + travelM + travelG;

    int totalTime = totalPickingTime+ totalTravelTime;
    return totalTime;
}
int main(){
    vector<string>garbage={"G","GP","P","GG"};
    vector<int>time = {2,4,6};
    int store = garbageColl(garbage,time);
    cout<<store;
}
