#include<iostream>
using namespace std;

int main(){
    int mont;
    cout<<"Enter mont (1 - 12) :";
    cin>>mont;

    switch(mont){
        case 1:
            cout<<"it is january"<<endl;
            break;
        case 2:
            cout<<"it is february"<<endl;
            break;
        case 3:
            cout<<"it is march"<<endl;
            break;
        case 4:
            cout<<"it is april"<<endl; 
            break;
        case 5:
            cout<<"it is may"<<endl;      
            break;
        case 6:
            cout<<"it is june"<<endl;      
            break;  
        case 7:
            cout<<"it is july"<<endl;   
            break;
        case 8:
            cout<<"it is august"<<endl;   
            break; 
        case 9:
            cout<<"it is september"<<endl;  
            break;
        case 10:
            cout<<"it is october"<<endl;
            break;
        case 11:
            cout<<"it is november"<<endl;  
            break;  
        case 12:
            cout<<"it is december"<<endl;  
            break;
        default:
            cout<<"invalid month"<<endl;
            


    }
}