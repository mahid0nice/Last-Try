#include<iostream>
using namespace std;

class Human{
    public :
        string name;
        string occupation;
        int age;

        void eat(){
            cout<<"this person is eating\n";
        }
        void drink(){
            cout<<"this person is drinking\n";
        }
        void sleep(){
            cout<<"this person is sleeping\n";
        }
};

int main(){
    Human h1;
    Human h2;

    h1.name = "Mahid";
    h1.occupation = "Software Engineer";
    h1.age = 22;

    h2.name = "Tina";
    h2.occupation = "Doctor";
    h2.age = 21;

    cout<<"Name : "<<h1.name<<endl;
    cout<<"Occupation : "<<h1.occupation<<endl;
    cout<<"Age : "<<h1.age<<endl;

    cout<<"Name : "<<h2.name<<endl;
    cout<<"Occupation : "<<h2.occupation<<endl;
    cout<<"Age : "<<h2.age<<endl;

    h1.eat();
    h1.drink();
    h1.sleep();

    h2.eat();
    h2.drink();
    h2.sleep();

    return 0;
}