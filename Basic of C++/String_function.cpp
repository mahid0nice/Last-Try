#include<iostream>
using namespace std;

int main(){

    string name=mahid;
    //cout<<"enter your name :";
    getline(cin,name);
    //name.clear();
    //name.append(" mahid");
    name.erase(0,1);
    name.replace(0,1,"M");
    name.insert(0,"mr. ");
    if (name.length()>12){
        cout<<"your name is too long "<<endl;
    }else if(name.empty()){
        cout<<"your name is empty "<<endl;
    }else{
        cout<<"your name is acceptable "<<name<<endl;
    }
    cout<<name.find("mahid")<<endl;

    
    return 0;                                                       
}