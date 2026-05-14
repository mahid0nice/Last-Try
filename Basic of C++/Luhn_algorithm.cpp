#include<iostream>
using namespace std;

int getDigit(const int number);
int sum_odd_digits(const string card_number);
int sum_even_digits(const string card_number);

int main(){
    string card_number;
    int result = 0;

    cout<<"Enter your credit card number: ";
    cin>>card_number;

    result = sum_odd_digits(card_number) + sum_even_digits(card_number);
    if(result % 10==0){
        cout<<card_number<<" is valid."<<endl;
    }else{
        cout<<card_number<<" is invalid."<<endl;
    }
    return 0;
}
int sum_odd_digits(const string card_number){
    
    int sum = 0;
    
    for(int i = card_number.size()-1;i>=0;i-=2){
        sum += card_number[i]-'0';
    }
    return sum;
}
int sum_even_digits(const string card_number){
    int sum = 0;
    
    for(int i = card_number.size()-2;i>=0;i-=2){
        sum += getDigit((card_number[i]-'0')*2);
    }
    return sum;
}

int getDigit(const int number){
    return number %10 + (number/10%10);
}