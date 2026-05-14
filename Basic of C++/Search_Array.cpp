#include<iostream>
using namespace std;

int Search_Array(int arr[], int size, int target);
int main(){
    int numbers[] = { 10, 20, 30, 40, 50};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int mynum;

    cout<<"Enter element to search for:";
    cin>>mynum;

    index = Search_Array(numbers,size,mynum);

    if(index != -1){
        cout<<"element found at index :"<<index<<endl;
    }else{
        cout<<"element not found in the array."<<endl;
    }
    return 0;

}

int Search_Array(int arr[], int size, int target){
    for(int i =0; i<size; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}