#include <iostream>
#include <ctime>
#include "Game.h"

using namespace std;

Game::Game(int mn)
{
    maxNumber = mn;
    cout << "GAME CONSTRUCTOR: object initialized with "
         << mn
         << " as maximum value"
         << endl;
}

Game::~Game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void Game::play()
{
    cout << "PLAY: Game started, number randomised and user input asked"
         << endl;

    srand(time(NULL));
    randomNumber = rand() % maxNumber;

    while (playerGuess != randomNumber)
    {
        cout << "Guess a number between 1 - "
             << maxNumber
             << endl;
        cin >> playerGuess;
        numOfGuesses++;

        if (playerGuess < randomNumber)
        {
            cout << "Your guess was too small"
                 << endl;
        }

        else if (playerGuess > randomNumber)
        {
            cout << "Your guess was too big"
                 << endl;
        }
    }

    if (playerGuess == randomNumber)
    {
        printGameResult();
    }
}

void Game::printGameResult()
{

    cout << "PRINTGAMERESULT: Game over. Right answer and number of guesses printed"
         << endl;

    cout << "Your guess is right = "
         << randomNumber
         << endl;

    cout << "You guessed the right answer = "
         << randomNumber
         << " with "
         << numOfGuesses
         << " guesses"
         << endl;
}


