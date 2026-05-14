#include<iostream>
using namespace std;

void Bubble_Sort ( int arr[],int size);

int main(){
    int arr[] = {5,4,7,2,3,4,7,8,14,15,43,23,45,67,89,90};
    int size = sizeof(arr)/sizeof(arr[0]);

    Bubble_Sort(arr,size);
    for(int element : arr){
        cout<<element<<" ";
    }
    return 0;
}

void Bubble_Sort( int arr[],int size){
    int temp;

    for(int i = 0; i<size-1;i++){
        for(int j = 0; j<size-i-1; j++){
            if (arr[j]>arr[j+1]){  //for ascending order for descending order change to (arr[j]<arr[j+1])
                temp = arr[j];                         
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}