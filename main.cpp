#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

 
const int MAX_SIZE =10;

struct BoardType
{
  int boardSize[MAX_SIZE][MAX_SIZE];
  int guess[MAX_SIZE][MAX_SIZE];
  char ocean = '~';
  char ship = '#';
  char shipHit = 'H';
  char miss = '.';
};

//Pre: board contains information from struct BoardType
//Post: randomnize a board mixed with ~ for ocean and "#" for ship
void InitBoard(BoardType &board);

//Pre: board contains a 10x10 grid
//Post: user will guess a hit and row and col
void Fire(BoardType &board, int &row, int &col);

//Pre: board contains a 10X10 grid
  //row and col contain information from user
//Post: will determine if row and col contain ship or ocean
bool isHit(BoardType &board, int row, int col);

//Pre: board contains grid
  //row and col contain ship or ocean and guess from user
//Post: if all ship is hit then sunk is true
bool isSunk(BoardType &board, int row, int col);

int main ()
{
    BoardType board;
    int row, col;


return 0;
}
//**********************************************************************
void InitBoard(BoardType &board)
{
  //goes through row
    //goes through col
      //produces either ship or ocean
}
//********************************************************************
void Fire(BoardType &board, int &row, int &col)
{

  cout << "Enter coordinates of ship, separated by a space";
  cin>>row, col;

  //goes through row
    //goes through col
      //updates to guess array
}
//***************************************************************************
bool isHit(BoardType &board, int row, int col)
{
//if guess[row][col] == boardSize[row][col]
  //change symbol found at rowcol to H to represent being hit
  //return true;
  
//else
return false;
}

//***************************************************************************
bool isSunk(BoardType &board, int row, int col)
{
// if isHit is true and all ship is destroyed, then
  //return true;
//else
return false;
}


