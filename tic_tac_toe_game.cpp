#include<iostream>
#include<ctime>
using namespace std;

void draw_board(char *spaces);
void playar_move(char *spaces,char player);
void computer_move(char *spaces,char computer);
bool check_win(char *spaces,char player);
bool check_draw(char *spaces);


int main(){
    char spaces[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;
    
    draw_board(spaces);
    while(running){
        playar_move(spaces,player);
        draw_board(spaces);
        if(check_win(spaces,player)){
            running = false;
            break;
        }else if(check_draw(spaces)){
            cout<<"It's a draw!"<<endl;
            break;
        }

        computer_move(spaces,computer);
        draw_board(spaces);
        if(check_win(spaces,player)){
            running = false;
            break;
        }else if(check_draw(spaces)){
            cout<<"It's a draw!"<<endl;
            break;
        }
    }
    cout<<"************************"<<endl;
    cout<<"      Game Over!"<<endl;
    cout<<"************************"<<endl;
    cout<<"* Thanks for playing! *"<<endl;
    cout<<"************************"<<endl;
    return 0;
}

void draw_board(char *spaces){

    cout<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<spaces[0]<<"  |  "<<spaces[1]<<"  |   "<<spaces[2]<<"  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<spaces[3]<<"  |  "<<spaces[4]<<"  |   "<<spaces[5]<<"  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<spaces[6]<<"  |  "<<spaces[7]<<"  |   "<<spaces[8]<<"  "<<endl;
    cout<<"     |     |     "<<endl;
}

void playar_move(char *spaces,char player){
    int number;
    do{
        cout<<"Enter a spot to place a marker(1-9): ";
        cin>>number;
        number--;

        if(spaces[number]==' '){
            spaces[number]= player;
            break;
        }
    }while(!number>0 ||!number <8);

}

void computer_move(char *spaces,char computer){
    int number;
    srand(time(0));

    while(true){
        number = rand()%9;
        if(spaces[number]==' '){
            spaces[number]= computer;
            break;
        }
    }

}


bool check_win(char *spaces,char player){
    if((spaces[0]!= ' ') && spaces[0]==spaces[1] && spaces[1]==spaces[2] ){
        spaces[0] == player? cout<<"player wins\n" : cout<<"computer wins\n";
    }else if((spaces[3]!= ' ') && spaces[3]==spaces[4] && spaces[4]==spaces[5] ){
        spaces[3] == player? cout<<"player wins\n" : cout<<"computer wins\n";
    }else if((spaces[6]!= ' ') && spaces[6]==spaces[7] && spaces[7]==spaces[8] ){
        spaces[0] == player? cout<<"player wins\n" : cout<<"computer wins\n";
    }else if((spaces[0]!= ' ') && spaces[0]==spaces[3] && spaces[3]==spaces[6] ){
        spaces[0] == player? cout<<"player wins\n" : cout<<"computer wins\n";
    }else if((spaces[1]!= ' ') && spaces[1]==spaces[4] && spaces[4]==spaces[7] ){
        spaces[1] == player? cout<<"player wins\n" : cout<<"computer wins"<<endl;
    }else if((spaces[2]!= ' ') && spaces[2]==spaces[5] && spaces[5]==spaces[8] ){
        spaces[2] == player? cout<<"player wins\n" : cout<<"computer wins"<<endl;
    }else if((spaces[0]!= ' ') && spaces[0]==spaces[4] && spaces[4]==spaces[8] ){
        spaces[0] == player? cout<<"player wins\n" : cout<<"computer wins"<<endl;
    }else if((spaces[2]!= ' ') && spaces[2]==spaces[4] && spaces[4]==spaces[6] ){
        spaces[2] == player? cout<<"player wins\n" : cout<<"computer wins"<<endl;
    }else{ 
            return false;
        }
    return true;
}   


bool check_draw(char *spaces){
    for(int i =0;i<9;i++){
        if(spaces[i]==' '){
            return false;
        }
    }
    cout<<"It's a draw!"<<endl;
    return true;

}
