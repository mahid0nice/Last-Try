#include<iostream>
using namespace std;

void hbd(string x ,int y);
double square(double num);
string fulname(string fname,string lname);

int main(){
     
    string name = "Tina";
    string First_name = "tonaya";
    string Last_name = "Mahid";


    int age = 22;
    double length = 1.75;

    hbd(name,age);
    double are = square(length);

    cout<<"the area of the square is : "<<are<<endl;
    cout<<"the full name is : "<<fulname(First_name,Last_name)<<endl;
    return 0;
}

void hbd(string x,int y){
    cout<<"happy birthday:"<<x<<endl;
    cout<<"you are "<<y<<" years old "<<endl;
}

double square(double num){
    double result = num * num;
    return result;
}
string fulname(string fname,string lname){
    string fullname = fname + " " + lname;
    return fullname;
}