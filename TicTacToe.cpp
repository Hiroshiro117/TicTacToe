/*
   Aung Lin Htet ( Eddie )
   Professor Persiko
   CS-110A
   May. 10 .2017

Objective: To write a program to allow a game of Tic Tac Toe to be played, and to determine when the game is over

*/ 

#include <iostream>
#include <cstring>
using namespace std;


 char board[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' } ;// 3 rolls and 3 column
 
 char nextPlayer = 'X';

void clear () // display the square of tic tac toe 
{
 
  cout << " " << board[0][0] << " "<< "|" << " " << board[0][1] << " " << "|" << " " << board[0][2] << " " << endl << "-----------" << endl << " " << board[1][0] << " " << "|" << " " << board[1][1] << " " << "|" << " " << board[1][2] << " " << endl << "-----------" << endl << " " << board[2][0] << " " << "|" << " " << board[2][1] << " " << "|" << " " << board[2][2] << " ";
   
  cout << endl << endl ;
     
  cout << "----------------------------\n\n\n";
  
}

void Tagplayer() // show the turn of two player
{
  if ( nextPlayer == 'X' )
     nextPlayer = 'O';
    
  else 
     nextPlayer = 'X';
  
}

void display() // input the X and O value 
{
  int a;
  
  cout << "It is now "<< nextPlayer << "'s turn.\n\n";
  cin >> a ;
  cout << endl << endl ;
  
  while (a <= 0 || a >= 10) // for make sure number input in the bound
    {
      cout << " Please enter the number between 1 to 9!\n";
      cout << "Enter the "<< nextPlayer << "'s turn.\n\n";
      cin >> a ;
      cout << endl << endl;
    }
    
  if ( a == 1 )
    board[0][0] = nextPlayer;
  
  else if ( a == 2)  
    board[0][1] = nextPlayer;
  
  else if ( a == 3)
    board[0][2] = nextPlayer;
  
  else if ( a == 4)
    board[1][0] = nextPlayer;
    
  else if ( a == 5 )
    board[1][1] = nextPlayer;
 
  else if ( a == 6 )
    board[1][2] = nextPlayer;
    
  else if ( a == 7 )
    board[2][0] = nextPlayer;
  
  else if ( a == 8 )  
    board[2][1] = nextPlayer;
    
  else if ( a == 9 )  
    board[2][2] = nextPlayer;

}

char Win () // check the Winner of the player or Tie
{
  // X player win 
  
  if ( board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
  return 'X';
  
  if ( board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
  return 'X';
  
  if ( board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
  return 'X';
  
  if ( board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')
  return 'X';
  
  if ( board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X')
  return 'X';
  
  if ( board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X')
  return 'X';
  
  if ( board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
  return 'X';
  
  if ( board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')
  return 'X';
  
  // O player win
  
   if ( board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O')
  return 'O';
  
  if ( board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O')
  return 'O';
  
  if ( board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')
  return 'O';
  
  if ( board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O')
  return 'O';
  
  if ( board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O')
  return 'O';
  
  if ( board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O')
  return 'O';
  
  if ( board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
  return 'O';
  
  if ( board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')
  return 'O';
  
  if ( board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O')
  return 'O';
  
  // Tie way-1
  
  if ( board[0][0] == 'O' && board[0][2] == 'O' && board[1][2] == 'O'   && board[2][1] == 'O')
  return 'T';
  
  if ( board[0][1] == 'O' && board[0][0] == 'O' && board[1][2] == 'O'  && board[2][0] == 'O' )
  return 'T';
  
 if ( board[0][1] == 'O' && board[1][0] == 'O'  && board[2][2] == 'O' && board[2][0] == 'O')
  return 'T';
  
   if ( board[0][2] == 'O' && board[1][0] == 'O'  && board[2][2] == 'O' && board[2][1] == 'O')
  return 'T';
  
  // Tie way-2 
  
   if ( board[0][0] == 'O' && board[0][2] == 'O' && board[1][0] == 'O'  && board[1][2] == 'O' )
  return 'T';
  
  if ( board[0][1] == 'O' && board[0][2] == 'O'  && board[2][1] == 'O' && board[2][2] == 'O')
  return 'T';
  
 if ( board[0][1] == 'O' && board[0][0] == 'O'  && board[2][1] == 'O' && board[2][0] == 'O')
  return 'T';
  
   if ( board[1][0] == 'O' && board[1][2] == 'O' && board[2][0] == 'O' && board[2][2] == 'O')
  return 'T';
  
  // Tie way-3
  
  if ( board[0][1] == 'O' && board[1][1] == 'O' && board[2][0] == 'O'  && board[2][2] == 'O' )
  return 'T';
  
  if ( board[0][2] == 'O' && board[1][0] == 'O'  && board[1][1] == 'O' && board[2][2] == 'O')
  return 'T';
  
  if ( board[1][1] == 'O' && board[0][0] == 'O'  && board[1][2] == 'O' && board[2][0] == 'O')
  return 'T';
  
  if ( board[0][0] == 'O' && board[0][2] == 'O' && board[1][1] == 'O' && board[2][1] == 'O')
   return 'T';
   
   // Tie way-4
  
  if ( board[0][1] == 'O' && board[1][1] == 'O' && board[1][0] == 'O'  && board[2][2] == 'O' )
  return 'T';
  
  if ( board[0][2] == 'O' && board[1][0] == 'O'  && board[1][1] == 'O' && board[2][1] == 'O')
  return 'T';
  
  if ( board[1][1] == 'O' && board[0][0] == 'O'  && board[1][2] == 'O' && board[2][1] == 'O')
  return 'T';
  
   if ( board[0][1] == 'O' && board[1][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')
   return 'T';
   
  return '/';
}

int main()
{
  
  cout << "Welcome to play Tic Tac Toe!\n\n";
  clear ();
  
  while ( 1 ) // repeat and continue the program 
  {
    
    display ();
    clear ();
    
    if ( Win () == 'X')
    {
      cout << "Congratulations, X WON!\n";
      break;
    }
    
    else if ( Win () == 'O')
    {
      cout << "Congratulations, O WON!\n";
      break;
    }
    
    else if ( Win () == 'T')
    {
      cout << "Nobody Won. Please play again!\n";
      break;
    } 
    Tagplayer();
    
  }

  return 0;
}






/* Simple output -1 

Welcome to play Tic Tac Toe!

 1 | 2 | 3 
-----------
 4 | 5 | 6 
-----------
 7 | 8 | 9 

----------------------------


It is now X's turn.

 3


 1 | 2 | X 
-----------
 4 | 5 | 6 
-----------
 7 | 8 | 9 

----------------------------


It is now O's turn.

 1


 O | 2 | X 
-----------
 4 | 5 | 6 
-----------
 7 | 8 | 9 

----------------------------


It is now X's turn.

 6


 O | 2 | X 
-----------
 4 | 5 | X 
-----------
 7 | 8 | 9 

----------------------------


It is now O's turn.

 4


 O | 2 | X 
-----------
 O | 5 | X 
-----------
 7 | 8 | 9 

----------------------------


It is now X's turn.

 9


 O | 2 | X 
-----------
 O | 5 | X 
-----------
 7 | 8 | X 

----------------------------


Congratulations, X WON!
   


Simple output -2 

Welcome to play Tic Tac Toe!

 1 | 2 | 3 
-----------
 4 | 5 | 6 
-----------
 7 | 8 | 9 

----------------------------


It is now X's turn.

 1


 X | 2 | 3 
-----------
 4 | 5 | 6 
-----------
 7 | 8 | 9 

----------------------------


It is now O's turn.

 2


 X | O | 3 
-----------
 4 | 5 | 6 
-----------
 7 | 8 | 9 

----------------------------


It is now X's turn.

 3


 X | O | X 
-----------
 4 | 5 | 6 
-----------
 7 | 8 | 9 

----------------------------


It is now O's turn.

 4


 X | O | X 
-----------
 O | 5 | 6 
-----------
 7 | 8 | 9 

----------------------------


It is now X's turn.

 8


 X | O | X 
-----------
 O | 5 | 6 
-----------
 7 | X | 9 

----------------------------


It is now O's turn.

 6


 X | O | X 
-----------
 O | 5 | O 
-----------
 7 | X | 9 

----------------------------


It is now X's turn.

 9


 X | O | X 
-----------
 O | 5 | O 
-----------
 7 | X | X 

----------------------------


It is now O's turn.

 5


 X | O | X 
-----------
 O | O | O 
-----------
 7 | X | X 

----------------------------


Congratulations, O WON!
    
Simple Output-3 

Welcome to play Tic Tac Toe!

 1 | 2 | 3 
-----------
 4 | 5 | 6 
-----------
 7 | 8 | 9 

----------------------------


It is now X's turn.

 -5


 Please enter the number between 1 to 9!
Enter the X's turn.

 0


 Please enter the number between 1 to 9!
Enter the X's turn.

 11


 Please enter the number between 1 to 9!
Enter the X's turn.

 2


 1 | X | 3 
-----------
 4 | 5 | 6 
-----------
 7 | 8 | 9 

----------------------------


It is now O's turn.

 -2


 Please enter the number between 1 to 9!
Enter the O's turn.

 5


 1 | X | 3 
-----------
 4 | O | 6 
-----------
 7 | 8 | 9 

----------------------------


It is now X's turn.

 8


 1 | X | 3 
-----------
 4 | O | 6 
-----------
 7 | X | 9 

----------------------------


It is now O's turn.

 4


 1 | X | 3 
-----------
 O | O | 6 
-----------
 7 | X | 9 

----------------------------


It is now X's turn.

 6


 1 | X | 3 
-----------
 O | O | X 
-----------
 7 | X | 9 

----------------------------


It is now O's turn.

 3


 1 | X | O 
-----------
 O | O | X 
-----------
 7 | X | 9 

----------------------------


It is now X's turn.

 7


 1 | X | O 
-----------
 O | O | X 
-----------
 X | X | 9 

----------------------------


It is now O's turn.

 9


 1 | X | O 
-----------
 O | O | X 
-----------
 X | X | O 

----------------------------


Nobody Won. Please play again!
    

*/