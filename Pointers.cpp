#include<iostream>
using namespace std;

int main(){
    string name = "bro";
    string *pName = &name;
    string freepizza[3]={"pepperoni","mushroom","pineapple"};
    string *ppizza = freepizza;

    cout<<"name: "<<&name<<endl;
    cout<<"name: "<<*pName<<endl;
    cout<<"pName(address): "<<pName<<endl;

    cout<<"freepizza: "<<freepizza<<endl;
    cout<<"ppizza: "<<ppizza<<endl;
    cout<<"freepizza[0]: "<<*freepizza<<endl;
    cout<<"ppizza[0]: "<<ppizza[1]<<endl<<endl;

           //nullptr
    
    int *pointer = nullptr;
    int x = 12;
    //pointer = &x;

    if(pointer == nullptr){
        cout<<"pointer is null"<<endl;
    }else{
        cout<<"pointer is not null"<<endl;
        
    }


    return 0;
}