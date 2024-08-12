#include<iostream>
using namespace std;
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping :"<<"a :"<<a<<"b :"<<b;
}
int main(){
    //swapping element
    int a=10;
    int b=5;
    swap(a,b);

    return 0;
}