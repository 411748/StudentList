#include <iostream>
#include <cstring>
#include <cctype>

//Nick Braun
//10/3/2023
//Tic Tac Toe - 2 Player game that tracks wins and ties. Shows the board and tells players if moves are illegal or not.

using namespace std;

//Print board function that uses a 2d array and for loops to display the values in the correct order in the board
void p_board(char a1, char a2, char a3, char b1, char b2, char b3, char c1, char c2, char c3, char arr[3][3])
  {

  int i,j;
  cout << "Current Board: \n";
  for(i=0;i<3;i++) {
    for(j=0;j<3;j++)
      {
	cout<<"\t"<<arr[i][j];
      }
    cout<<endl;
  }
}

//Reset board function that makes all the values be "-".
void reset_board(char arr[3][3])
{
  arr[0][0] = '-';
  arr[0][1] = '-';
  arr[0][2] = '-';
  arr[1][0] = '-';
  arr[1][1] = '-';
  arr[1][2] = '-';
  arr[2][0] = '-';
  arr[2][1] = '-';
  arr[2][2] = '-';
}

//Function to check if X or O gets 3 in a row or if all of the board is filled with Letters.
void check_WinTie(char arr[3][3], int &X_wins, int &O_wins, int &ties, int &TieorWin) {
  //Bool designed to stop checking for ties if a player has won.
  bool haswon = false;
  //Checking for X wins.
  if (arr[0][0] == 'X' && arr[0][1] == 'X' && arr[0][2] == 'X') {
    X_wins = X_wins + 1;
    haswon = true;
  }
  if (arr[1][0] == 'X' && arr[1][1] == 'X' && arr[1][2] == 'X') {
    X_wins = X_wins + 1;
    haswon = true;
  }
  if (arr[2][0] == 'X' && arr[2][1] == 'X' && arr[2][2] == 'X') {
    X_wins = X_wins + 1;
    haswon = true;
  }
  if (arr[0][0] == 'X' && arr[1][0] == 'X' && arr[2][0] == 'X') {
    X_wins = X_wins + 1;
    haswon = true;
  }
  if (arr[0][1] == 'X' && arr[1][1] == 'X' && arr[2][1] == 'X') {
    X_wins = X_wins + 1;
    haswon = true;
  }
  if (arr[0][2] == 'X' && arr[1][2] == 'X' && arr[2][2] == 'X') {
    X_wins = X_wins + 1;
    haswon = true;
  }
  if (arr[0][0] == 'X' && arr[1][1] == 'X' && arr[2][2] == 'X') {
    X_wins = X_wins + 1;
    haswon = true;
  }
  if (arr[0][2] == 'X' && arr[1][1] == 'X' && arr[2][0] == 'X') {
    X_wins = X_wins + 1;
    haswon = true;
  }
  
  //Checking for O wins.
  if (arr[0][0] == 'O' && arr[0][1] == 'O' && arr[0][2] == 'O') {
    ++O_wins;
    haswon = true;
  }
  if (arr[1][0] == 'O' && arr[1][1] == 'O' && arr[1][2] == 'O') {
    ++O_wins;
    haswon = true;
  }
  if (arr[2][0] == 'O' && arr[2][1] == 'O' && arr[2][2] == 'O') {
    ++O_wins;
    haswon = true;
  }
  if (arr[0][0] == 'O' && arr[1][0] == 'O' && arr[2][0] == 'O') {
    ++O_wins;
    haswon = true;
  }
  if (arr[0][1] == 'O' && arr[1][1] == 'O' && arr[2][1] == 'O') {
    ++O_wins;
    haswon = true;
  }
  if (arr[0][2] == 'O' && arr[1][2] == 'O' && arr[2][2] == 'O') {
    ++O_wins;
    haswon = true;
  }
  if (arr[0][0] == 'O' && arr[1][1] == 'O' && arr[2][2] == 'O') {
    ++O_wins;
    haswon = true;
  }
  if (arr[0][2] == 'O' && arr[1][1] == 'O' && arr[2][0] == 'O') {
    ++O_wins;             
    haswon = true;
  }
  if (haswon == false){
    //Checking for Ties.
    if (arr[0][0] != '-' && arr[0][1] != '-' && arr[0][2] != '-' && arr[1][0] != '-' && arr[1][1] && arr[1][2] != '-' && arr[2][0] != '-' && arr[2][1] != '-' && arr[2][2] != '-') {
      ++ties;
      //Displays scores.
      cout << "X wins: " << X_wins << endl;
      cout << "O Wins: " << O_wins << endl;
      cout << "Ties: " << ties << endl;
      TieorWin = 1;
    }
  }
  //Displays scores if someone has won.
  if (haswon == true) {
    cout << "X wins: " << X_wins << endl;
    cout << "O wins: " << O_wins << endl;
    cout << "Ties: " << ties << endl;
    TieorWin = 1;    
  }
}

//Main function.
int main()
{
  char a1 = '-';
  char a2 = '-';
  char a3 = '-';
  char b1 = '-';
  char b2 = '-';
  char b3 = '-';
  char c1 = '-';
  char c2 = '-';
  char c3 = '-';
  //Main array used for the board.
  char arr[3][3] = {{a1, a2, a3}, {b1, b2, b3}, {c1, c2, c3}};
  int letter;
  int num;
  //Setting first player to always be X.
  char CurrentPlayer = 'X';
  int O_wins = 0;
  int X_wins = 0;
  int ties = 0;
  int Play_Again = 1;
  //While loop for when players want to play.
  while (Play_Again == 1) {
    reset_board(arr);
    p_board(a1, a2, a3, b1, b2, b3, c1, c2, c3, arr);
    int TieorWin = 2;
    CurrentPlayer = 'X';
    //While loop for while no one has won.
    while (TieorWin != 1) {
      int Playable = 1;
      //While loop for while its one persons turn.
      while (Playable == 1)
	{
	  char* input = new char[3];
	  cout << "Enter where you want to play(a1 = row 1 col 1, a2 = row 1 col 2, b1 = row 2 col 1 ect...: ";
	  cin.getline(input, 3, '\n');
	  if(input[0] == 'a') {
	    letter = 0;
	  }
	  else if(input[0] == 'b') {
	    letter = 1;
	  }
	  else if(input[0] == 'c') {
	    letter = 2;
	  }
	  if(input[1] == '1') {
	    num = 0;
	  }
	  else if(input[1] == '2') {
	    num = 1;
	  }
	  else if(input[1] == '3') {
	    num = 2;
	  }
	  //Move is valid.
	  if (arr[letter][num] == '-')
	    {
	      arr[letter][num] = CurrentPlayer;
	      p_board(a1, a2, a3, b1, b2, b3, c1, c2, c3, arr);
	      check_WinTie(arr, X_wins, O_wins, ties, TieorWin);
	      if (CurrentPlayer == 'X') {
		CurrentPlayer = 'O';
	      }
	      else if (CurrentPlayer == 'O') {
		CurrentPlayer = 'X';
	      }
	      Playable = 0;
	    }
	  else
	    {
	      cout<<"Not Playable";  
	    }
	}
    }
    //Asking if they want to play again.
    int againInput;
    cout << "Do you want to play again? (Yes = 1, No = 2)" << endl;
    cin >> againInput;
    cin.ignore(3, '\n');
    if (againInput == 1) {
      Play_Again = 1;
    }
    else {
      Play_Again = 2;
    }
  }
}


