#include <iostream>
// Nick Braun
// 9/12/2023
// Guessing Game - Computer Makes a random number from 0 to 100 and user puts a guess and the computer will say if its higher, lower, or correct and display how many guesses it took. Also will ask if they want to play again.

// No strings
// No Global Variables
// No mouse 

using namespace std;

int main()
{
  int playAgain = 1; // Starts automatically with wanting to play again
  while (playAgain == 1) { // Always running if user wants to play
    srand (time(NULL));
    // Creating Variables 
    int random = rand() % 101; //random number
    int guessCount = 0;
    int response;

    while (response != random){ //While User not right
      cout << "Enter guess from 0-100 \n"; //Ask for number
      cin >> response; //Get response
      guessCount = guessCount + 1; //Add to guessing count variable
      if (response > random) { // Too big
	cout << "Your number was too big \n";
      }
      else if (response < random) { // Too small
	cout << "Your number was too small \n";
      }
    }
    cout << "You got the number in " << guessCount << " guesses, play again? (1=Yes, 2=No) \n"; // User got number, asking if they want to play again
    int question;
    cin >> question; // Users Response 
    if (question == 1) {
      playAgain = 1;
    }
    else if (question == 2) {
      playAgain = 2;
    }
  }
}
