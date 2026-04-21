#include<iostream>
using namespace std;

int main(){
    int grade = 90;

    grade>=90?cout<<"passed in the exam "<<endl:cout<<"failed in the exam "<<endl;
    
    int number = 9;

    number % 2 ? cout<<"odd number "<<endl:cout<<"even number "<<endl;

    bool hungry= true;

    hungry ? cout<<"eat something "<<endl:cout<<"do not eat "<<endl;
    cout<<(hungry ? "eat something " : "do not eat ")<<endl;
    return 0;
}