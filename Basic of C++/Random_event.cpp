#include<iostream>
#include<ctime>
using namespace std;

int main(){
    srand(time(0));
    int randnum = rand()%5 +1 ;

    switch(randnum){
        case 1:
            cout<<"you got a car "<<endl;
            break;
        case 2:
            cout<<"you got a bike "<<endl;
            break;
        case 3:
            cout<<"you got a house "<<endl;
            break;
        case 4:
            cout<<"you got a boat "<<endl;
            break;
        case 5:
            cout<<"you got a plane "<<endl;
            break;
        default:
            cout<<"try again "<<endl;

    }
}
