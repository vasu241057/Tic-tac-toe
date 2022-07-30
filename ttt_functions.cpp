#include <iostream>
#include "ttt_header.hpp"
#include <vector>

std::vector<std::string> board = {" "," "," "," "," "," "," "," "," "};
int turns = 0;
void draw() {
    
    

  std::cout << "Press [Enter] to begin: ";
  std::cin.ignore();

  std::cout << "\n";

  std::cout << "===========\n";
  std::cout << "Tic-Tac-Toe\n";
  std::cout << "===========\n\n";
  
  std::cout << "Player 1) x\n";
  std::cout << "Player 2) O\n\n";

  std::cout << "Here's the 3 x 3 grid:\n\n";

  std::cout << "     |     |      \n";
  std::cout << "  1  |  2  |  3   \n";
  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";
  std::cout << "  4  |  5  |  6   \n";
  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";
  std::cout << "  7  |  8  |  9   \n";
  std::cout << "     |     |      \n\n";
 
};

bool Player_wins(){
    if(board[0] == board[1] && board[1] == board[2] && board[0] != " "){
        return true;
    }else if(board[3] == board[4] && board[4] == board[5] && board[3] != " "){
        return true;
    }else if(board[6] == board[7] && board[7] == board[8] && board[6] != " "){
        return true;
    }else if(board[0] == board[3] && board[3] == board[6] && board[0] != " "){
        return true;
    }else if(board[1] == board[4] && board[4] == board[7] && board[1] != " "){
        return true;
    }else if(board[2] == board[5] && board[5] == board[8] && board[2] != " "){
        return true;
    }else if(board[0] == board[4] && board[8] == board[4] && board[8] != " "){
        return true;
    }else if(board[2] == board[4] && board[4] == board[6] && board[2] != " "){
        return true;
    }
    
    else{
      return false;
    }
}

bool Player2_wins(){
     if(board[0] == board[1] && board[1] == board[2] && board[0] == "O"){
        return true;
    }else if(board[3] == board[4] && board[4] == board[5] && board[3] == "O"){
        return true;
    }else if(board[6] == board[7] && board[7] == board[8] && board[6] == "O"){
        return true;
    }else if(board[0] == board[3] && board[3] == board[6] && board[0] == "O"){
        return true;
    }else if(board[1] == board[4] && board[4] == board[7] && board[1] == "O"){
        return true;
    }else if(board[2] == board[5] && board[5] == board[8] && board[2] == "O"){
        return true;
    }else if(board[0] == board[4] && board[8] == board[4] && board[8] == "O"){
        return true;
    }else if(board[2] == board[4] && board[4] == board[6] && board[2] == "O"){
        return true;
    }
    
    else{
      return false;
    }
}

void display(){
  std::cout << "Player 1) X\n"; //x
  std::cout << "Player 2) O\n\n"; //O

  std::cout << "Here's the 3 x 3 grid:\n\n";

  std::cout << "     |     |      \n";
  std::cout << "  1  |  2  |  3   \n";
  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";
  std::cout << "  4  |  5  |  6   \n";
  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";
  std::cout << "  7  |  8  |  9   \n";
  std::cout << "     |     |      \n\n";

  std::cout << "Here's the 3 x 3 grid after that move:\n\n";

  std::cout << "     |     |      \n";
  std::cout << "  " << board[0]  <<"  |  " << board[1]  <<"  |  " << board[2]  <<"   \n";
  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";
  std::cout << "  " << board[3]  <<"  |  " << board[4]  <<"  |  " << board[5]  <<"   \n";
  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";
  std::cout << "  " << board[6]  <<"  |  " << board[7]  <<"  |  " << board[8]  <<"   \n";
  std::cout << "     |     |      \n\n";

}

void input(){
   while( turns < 7 && Player_wins() != true){
    int player1;
    int player2;
     std::cout << "Player1! please enter your choice\n" ;
    std::cin >> player1 ;
     player1--;
     std::cout << player1 << "\n";
    
    while( player1 >=8 || board[player1] =="x" || board[player1] == "O" || player1 == -1){
        std::cout << "Entered value should be between 1 to 8 and a number which is not entered yet. Please enter again\n";
        std::cin >> player1 ;
        player1--;
    }
   
    
        board[player1] = "x";

        display();

    
    if(turns < 7 && Player_wins() != true){
       std::cout << "Player2! please enter your choice\n" ;
       std::cin >> player2 ;
       player2--; 
    
    while( player2 >=8|| board[player2] =="x" || board[player2] == "O"  || player2 == -1){
        std::cout << "Entered value should be between 1 to 8 and a number which is not entered yet. Please enter again\n";
         std::cin >> player2 ;
       player2--;
    }
    
    board[player2] = "O";
    display();
    turns++;
    } else{
        std::cout << "player1 wins!\n";
    }


    
    

 } 

 if(turns > 6){
    std::cout << "No one wins\n";
 } else if(Player2_wins()){
    std::cout << "player2 wins!\n";
 }
  

}