#include<iostream>
#include<vector>
#include<string>
using namespace std;

void printBoard(const vector<vector<char>>& board){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<board[i][j];
            if(j<2)cout<<" | ";
        }
        cout<<endl;
        if(i<2)cout<<"--|---|--"<<endl;
    }
}
bool checkWin(const vector<vector<char>>& board,char player){
    for(int i=0;i<3;i++){
        if((board[i][0]==player && board[i][1]==player && board[1][2]==player) ||
        (board[0][i]==player && board[1][i]==player && board[2][i]==player)){
            return true;

        }
    }
    if((board[0][0]==player && board[1][1]==player && board[2][2]==player) || (board[0][2]==player && board[1][1]==player && board[2][0]==player)){return true;
    }
    return false;
}
bool checkDraw(const vector<vector<char>>& board){
    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
            if(board[i][j]==' '){
                return false;
            }
        }
    }
    return true;
}

bool getMove(vector<vector<char>>& board,char player){
    int row, col;
    while(true){
        cout<<"Player "<<player<<", enter your move(row and column from 0 to 2): ";
        cin>>row>>col;
        if(row>=0 && row<3 && col>=0 && col<3 && board[row][col]==' '){
            board[row][col]=player;
            return true;
        }
        else{
            cout<<"Invalid move. Try again."<<endl;
        }
    }
}

void playGame(){
    vector<vector<char>> board(3, vector<char>(3, ' '));
    char currentPlayer = 'X';

    bool gameOver=false;

    while(!gameOver){
printBoard(board);
getMove(board, currentPlayer);

if(checkWin(board, currentPlayer)){
    printBoard(board);
    cout<<"It's a draw!"<<endl;
    gameOver=true;
}else{
    currentPlayer=(currentPlayer=='X')?'O':'X';
}
    }

    char playAgain;
    cout<<"Do you want to play again? (y/n): ";
    cin>>playAgain;
    if(playAgain=='y' || playAgain=='Y'){
        playGame();
    }else{
        cout<<"Thanks for playing!"<<endl;
    }
}

int main(){
    playGame();
    return 0;
}