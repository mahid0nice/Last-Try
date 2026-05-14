#include<iostream>
using namespace std;

void Walk(int steps);
int Factorial(int num);
int main(){
    int steps;

    cout<<"Enter the number of steps you want to take : ";
    cin>>steps;

    //Walk(steps);

    cout<<Factorial(10)<<endl;
    return 0;
}

void Walk(int steps){
    if(steps > 0){
        cout<<"you take a step forward"<<endl;
        Walk(steps - 1);
    }
}

int Factorial(int num){
    if(num >1){
        return num * Factorial(num - 1);
    }else{
        return 1;
    }
}