#include<iostream>
using namespace std;

int main(){
    string cars[][3] ={ {"mustang","escape","f-150"},
                        {"camaro","corvette","silverado"},
                        {"charger","challenger","ram"}};
    
    int row = sizeof(cars)/sizeof(cars[0]);
    int col = sizeof(cars[0])/sizeof(cars[0][0]);
    
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<cars[i][j]<<" ,  ";
        }
            cout<<endl;
    }
    return 0;
}