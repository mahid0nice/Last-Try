#include<iostream>
using namespace std;

int main(){
    //Memory address
    string name = "bro";
    int age = 22;
    bool student = true;

    cout<<&name<<endl;
    cout<<&age<<endl;
    cout<<&student<<endl;

    return 0;
}