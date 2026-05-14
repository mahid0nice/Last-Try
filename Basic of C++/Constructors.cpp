#include<iostream>
using namespace std;

class Car{
    public:
        string make;
        string model;
        int year;
        string color;

    Car(string m, string md, int y, string c){
        make = m;
        model = md;
        year = y;
        color = c;
    }
};


int main(){
    Car car1("Toyota", "Camry", 2020, "Red");
    Car car2("Honda", "Civic", 2019, "Blue");
    

    cout<<"Make: "<<car1.make<<endl;
    cout<<"Model: "<<car1.model<<endl;
    cout<<"Year: "<<car1.year<<endl;
    cout<<"Color: "<<car1.color<<endl;

    cout<<"Make: "<<car2.make<<endl;
    cout<<"Model: "<<car2.model<<endl;
    cout<<"Year: "<<car2.year<<endl;
    cout<<"Color: "<<car2.color<<endl;

    return 0;

    
}