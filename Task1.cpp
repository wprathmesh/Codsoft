//Number Guessing Game

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    srand(time(0));

    int randomNumber=rand()%100+1;
    int userGuess=0;

    cout<<"Welcome! to the Guessing Game"<<endl;
    cout<<"I have generated a random number between 1 and 100"<<endl;
    cout<<"Try to guess it"<<endl;

 while(true){
    cout<<"Enter your guess";
    cin>>userGuess;

    if(cin.fail()){
        cin.clear();
        cin.ignore(10000,'/n');
        cout<<"Please enter a valid number"<<endl;
        continue;
    }
  if(userGuess <randomNumber){
    cout<<"Too Low! Try Again."<<endl;

  }
  else if(userGuess>randomNumber){
    cout<<"Too High! Try Again."<<endl;
  }
  else{
    cout<<"Congratulations!! You guessed the correct number: "<<randomNumber<<endl;
    break;
  }
 }
 return 0;
 }