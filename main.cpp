#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


const int MAX_SIZE = 10;

struct BoardType
{
    int boardSize[MAX_SIZE][MAX_SIZE];
    int guess[MAX_SIZE][MAX_SIZE];
    char ocean = '~';
    char ship = '#';
    char ShipHit = 'H';
    char miss = '.';
};

//Pre: board contains information from struct BoardType
//Post: randomize a board mixed with ~ for ocean and "#" for ship
void InitBoard(BoardType& board);

//Pre: board contains a 10x10 grid
//Post: user will guess a hit and row and col
void Fire(BoardType& board);


//Pre: board contains grid
  //row and col contain ship or ocean and guess from user
//Post: if all ship is hit then sunk is true
bool isSunk(BoardType& board, int row, int col);

int main()
{
    BoardType board;
    int row, col;


    return 0;
}
//**********************************************************************
void InitBoard(BoardType& board)
{
    BoardType boardSize;
    int row = 0;
    int col = 0;
    boardSize [row][col] = NULL;


    //goes through row
    for (int row = 0; row < MAX_SIZE; row++)
    {
        //goes through col
        for (int col = 0; col < MAX_SIZE; col++) {
            //set board to water 
            boardSize[row][col] = board.ocean;

            while (boardSize)
            {
                //selecting random locations to place ships 
                randRow = rand() % 10;
                randCol = rand() % 10;
                //check if location is empty or now 
                if (boardSize[row][col] == board.ocean)
                    boardSize[randRow][randCol] = board.ship;
                //I feel like this might be wrong? I wasn't sure if I needed to create a new board or still assign
                //it to boardSize[row][col] ?? 



            }
        }
    }
}
//********************************************************************
void Fire(BoardType& board)
{
    int row = 0;
    int col = 0;

    cout << "Enter coordinates of ship, separated by a space";
    cin >> row;  
    cin >> col;

    switch (board[row][col])
        {

    case '#': //if ship then print hit and replace ocean with shipHit
          if (board[row - 1][col] == board.ShipHit) //checks to see if any other space is hit 
          {
               cout << "Hit Again!" << endl;
               board[row][col] = board.ShipHit;
          }
         else if (board[row + 1][col] == board.ShipHit)
         {
          cout << "Hit Again!" << endl;
           board[row][col] == board.ShipHit;
         }
         else if (board[row][col + 1] == board.ShipHit)
         {
          cout << "Hit Again!" << endl;
          board[row][col] == board.ShipHit;
         }
         else
         {
          cout << "Hit!" << endl; //no ship hit next to spot 
          board[row][col] = board.ShipHit;
         }
              break;
         case 'H': //if ship is already hit 
            cout << "You've already hit this ship";
              break;
         default: cout << " Miss!" << endl; //just hit ocean. 

    }
}


//***************************************************************************
bool isSunk(BoardType& board, int row, int col)
{
    // if  there is no ship left 
      //return true;
    //else
    return false;
}
