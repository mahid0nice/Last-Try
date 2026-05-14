#include<iostream>
using namespace std;

int main(){
    string question[] ={"1. what year was c++ created?",
                        "2. who is the creator of c++?",
                        "3. what is the predecessor of c++?",
                        "4. is the earth flat?"};
    string options[][4]={{"a. 1980","b. 1985","c. 1990","d. 1995"},
                        {"a. Bjarne Stroustrup","b. James Gosling","c. Dennis Ritchie","d. Guido van Rossum"},
                        {"a. C#","b. Java","c. C","d. Python"},
                        {"a. true","b. false","c. maybe","d. not sure"}};
    
    char answer[]= {'b','a','c','b'};

    int size = sizeof(question)/sizeof(question[0]);
    char guess;
    int score = 0;

    for (int i =0;i<size ;i++){

        cout<<"************************"<<endl;
        cout<<question[i]<<endl;
        cout<<"************************"<<endl;
        for(int j = 0;j<4;j++){
            cout<<options[i][j]<<endl;
        }
        cin>>guess;
        guess = tolower(guess);
        if(guess == answer[i]){
            cout<<"correct!"<<endl;
            score++;
        }else{
            cout<<"Wrong answer!"<<endl;
            cout<<"The correct answer is "<<answer[i]<<endl;
        }
    }
    cout<<"Your final score is "<<score<<" out of "<<size<<endl;
    return 0;
}