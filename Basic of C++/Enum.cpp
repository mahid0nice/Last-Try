#include<iostream>
using namespace std;

enum day {Monday=2, Tuesday=3, Wednesday=4, Thursday=5, Friday=6, Saturday=0, Sunday=1};

int main(){
    //string today = "Saturday";
    day today = Saturday;

    switch(today){
        case Saturday : cout<<"Today is Saturday\n"; 
                break;
        case Sunday : cout<<"Today is Sunday\n"; 
                break;
        case Monday : cout<<"Today is Monday\n"; 
                break;
        case Tuesday : cout<<"Today is Tuesday\n"; 
                break;
        case Wednesday : cout<<"Today is Wednesday\n"; 
                break;
        case Thursday : cout<<"Today is Thursday\n"; 
                break;
        case Friday : cout<<"Today is Friday\n"; 
                break;
        default : cout<<"Invalid day\n"; 
                break;
        
    }
    return 0;
}