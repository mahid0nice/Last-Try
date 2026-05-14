#include<iostream>
using namespace std;

int main(){
    string students[] = { "mahid","siyam","sabbir","sharif"};
    int grades[] = { 90, 80, 85, 95};

    for(string student: students){
        cout<<student<<endl;
    }

    for(int grade: grades){
        cout<<grade<<endl;
    } 
    return 0;
}