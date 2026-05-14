#include<iostream>
using namespace std;

class Pizza{
    public:
        string topping;
        string topping1;
    Pizza(){
        
    }

    Pizza(string t){
        topping = t;
    }
    Pizza(string t, string t1){
        topping = t;
        topping1 = t1;
    }

};

int main(){
    Pizza pizza1("Pepperoni");
    Pizza pizza2("Mushroom", "Olives");
    Pizza pizza3;

    cout<<"Pizza 1 Topping: "<<pizza1.topping<<endl;
    cout<<"Pizza 2 Topping 1: "<<pizza2.topping1<<endl;
    cout<<"Pizza 3 Topping: "<<pizza3.topping<<endl;

    return 0;
}