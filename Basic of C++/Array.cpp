#include<iostream>
using namespace std;

int main(){
    string car[]= {"BMW","Mercedes"};
    int x = sizeof(car)/sizeof(car[0]);
    for (int i = 0; i<x; i++){
        cout<<car[i]<<endl;
    }
    //double x = sizeof(car)/sizeof(string);
    cout<<"the size of the array is : "<<x<<endl;
    return 0;
}