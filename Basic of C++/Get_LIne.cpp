#include<iostream>
using namespace std;

int main(){
    string name;
    int age;
    
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your full name: ";
    getline(cin>>ws,name);
    
    cout<<"Your name is "<<name<<" and your age is "<<age<<endl;

    return 0;
}