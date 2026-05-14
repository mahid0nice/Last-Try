#include<iostream>
using namespace std;

class stove {
    private :   
        int temp=0;
    public :
        int gettemp(){
            return temp;
        }
        void settemp(int t){
            temp = t;
            if (t < 0){
                cout<<"Temperature cannot be negative."<<endl;
                
            }else if (t > 0){
                cout<<"Temperature is "<<t<<" degrees."<<endl;
            }
        }
};

int main(){
    stove s1;
    s1.settemp(350);
    //s1.gettemp();
    cout<<"Temperature: "<<s1.gettemp()<<endl;
    return 0;
}