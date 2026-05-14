#include<iostream>
using namespace std;

class Animal{
    public :
        bool alive = true;
    
    void eat(){
        cout<<"The animal is eating."<<endl;
        }
};

class Dog : public Animal{
    public: 
    void bark(){
        cout<<"The dog is barking."<<endl;
    }
};

class Cat : public Animal{
    public:
    void meow(){
        cout<<"The cat is meowing."<<endl;
    }
};

int main(){
    Dog dog1;
    dog1.eat();
    cout<<"Is the dog alive? "<<dog1.alive<<endl;
    dog1.bark();
    
    cout<<endl;

    Cat cat1;
    cat1.eat();
    cout<<"Is the cat alive? "<<cat1.alive<<endl;
    cat1.meow();
    return 0;
}