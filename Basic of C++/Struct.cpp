#include<iostream>
using namespace std;

struct student{
    string name;
    int age;
    double gpa;
    bool enrolled;
};

int main(){
    student s1;
    s1.name = "Mahid";
    s1.age = 22;
    s1.gpa = 3.;
    s1.enrolled = true;

    student s2;
    s2.name = "TIna";
    s2.age = 20;
    s2.gpa = 3.8;
    s2.enrolled = true;

    cout<<"Name : "<<s1.name<<endl;
    cout<<"Age : "<<s1.age<<endl;
    cout<<"GPA : "<<s1.gpa<<endl;
    cout<<"Enrolled : "<<(s1.enrolled ? "Yes\n" : "No\n")<<endl;

    cout<<"Name : "<<s2.name<<endl;
    cout<<"Age : "<<s2.age<<endl;
    cout<<"GPA : "<<s2.gpa<<endl;
    cout<<"Enrolled : "<<(s2.enrolled ? "Yes" : "No")<<endl;
}