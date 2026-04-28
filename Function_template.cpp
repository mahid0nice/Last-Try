#include<iostream>
using namespace std;

template<typename T,typename U>


auto myMax(T a, U b){
    return (a>b) ? a : b;
}

int main(){
    cout<<"Max of 3 and 5 is : "<<myMax(3,5)<<endl;
    cout<<"Max of 3.5 and 2.1 is : "<<myMax(3,5.4)<<endl;
    return 0;
}