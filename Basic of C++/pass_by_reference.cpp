#include<iostream>
using namespace std;

void swap(string &a, string &b);

int main(){
    string x = "fire";
    string y = "water";

    swap(x,y);

    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
    
    return 0;
}

void swap(string &a, string &b){
    string temp = a;
    a = b;
    b = temp;
}