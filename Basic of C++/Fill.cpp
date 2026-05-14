#include<iostream>
using namespace std;

int main(){
    const int size = 9;
    int arr[size];
    string food[size];

    fill(arr,arr+size,90);
    fill(food,food+(size/2),"buger");
    fill(food + (size/3),food+(size/3)*2,"pizza");
    fill(food+(size/3)*2,food+size,"fries");

    for(int student : arr){
        cout<<student<<endl;
    }

    for(string item : food){
        cout<<item<<endl;
    }
}