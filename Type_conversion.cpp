#include<iostream>
using namespace std;

int main(){
    //implicit type conversion= automatic type conversion
    //explicit type conversion= precade value to new type

    double x = (int)3.14;
    cout<<x<<endl;
    char y = 100;
    cout<<y<<endl;
    
    cout<<(char)100<<endl;

    int correct = 6;
    int question = 10;
    double score = correct/(double)question*100;
    cout<<score<<endl;
}
