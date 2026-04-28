#include<iostream>
using namespace std;

int main(){
    int *pNum = NULL;
    pNum = new  int ;
    *pNum = 12;

    cout<<"Address : "<<pNum<<endl;
    cout<<"Value : "<<*pNum<<endl;

    delete pNum; 
    cout<<"Address : "<<pNum<<endl;
    cout<<"Value : "<<*pNum<<endl;


    char *pGrades = NULL;
    int size;

    cout<<"Enter the number of grades: ";
    cin>>size;

    pGrades = new char[size];

    for(int i = 0;i<size; i++){
        cout<<"Enter grade "<<i+1<<": ";
        cin>>pGrades[i];
    }

    for(int i = 0;i<size; i++){
        cout<<"Grade "<<i+1<<": "<<pGrades[i]<<endl;
    }
    delete[] pGrades;
    return 0;
}