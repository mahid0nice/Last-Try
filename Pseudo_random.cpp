#include<iostream>
using namespace std;

int main(){
    srand(time(NULL));
    int num_1 = (rand()%6) +1;
    int num_2 = (rand()%6) +1;
    int num_3 = (rand()%6) +1;

    cout<<"random number : "<<num_1<<endl;
    cout<<"random number : "<<num_2<<endl;
    cout<<"random number : "<<num_3<<endl;

    return 0;
}