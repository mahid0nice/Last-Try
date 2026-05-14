#include<iostream>
using namespace std;

struct Car{
    string model;
    int year;
    string color;
};

void printcar(Car &car);
void printcar(Car &car, string newcolor);
int main(){
    Car c1;
    Car c2;

    c1.model = "Toyota Camry";
    c1.year = 2020;
    c1.color = "Red";

    c2.model = "Honda Accord";
    c2.year = 2019;
    c2.color = "Blue";

    printcar(c1,"silver");
    printcar(c2,"black");
    
    printcar(c1);
    printcar(c2);
}

void printcar(Car &car){
    cout<<"address : "<<&car<<endl;
    cout<<"Model : "<<car.model<<endl;
    cout<<"Year : "<<car.year<<endl;
    cout<<"Color : "<<car.color<<endl;
}

void printcar(Car &car, string newcolor){
    car.color = newcolor;
    cout<<"address : "<<&car<<endl;
}