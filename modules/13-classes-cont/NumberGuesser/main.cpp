// Name: Tarik Dahnoun
// Number guesser: Find a user chosen number between 1-100 by asking the user iterative questions

#include <iostream>
#include "NumberGuesser.h"

using namespace std;

bool shouldPlayAgain()
{
    char goAgain;

    cout << "Great! Do you want to play again? (y/n): ";
    cin >> goAgain;

    if(goAgain == 'y')
    {
        return true;
    }
    else
    {
        return false;
    }
}

char getUserResponseToGuess(int guess)
{
    char guessResponse;

    cout << "Is it " << guess << "? (h/l/c): ";
    cin >> guessResponse;

    return guessResponse;
}

void playOneGame()
{
    int min = 26;
    int max = 42;
    NumberGuesser littleGuesser(min, max);
    cout << "Think of a number between [" << min << "-" << max <<"].\n";
    int midpoint = littleGuesser.getCurrentGuess();
    char response = getUserResponseToGuess(midpoint);

    do
    {
        if(response == 'h')
        {
            littleGuesser.higher();
            response = getUserResponseToGuess(littleGuesser.getCurrentGuess());
            continue;
        }
        else if(response == 'l')
        {
            littleGuesser.lower();
            response = getUserResponseToGuess(littleGuesser.getCurrentGuess());
            continue;
        }
        else if(response == 'c')
        {
            littleGuesser.reset();
            break;
        }
        else
        {
            cout << "Unexpected input, exiting this game...\n";
            littleGuesser.reset();
            break;
        }
    }
    while(response == 'h' || response == 'l' || response == 'c');
}

int main()
{
    do 
    {
        playOneGame(); 
    }
    while(shouldPlayAgain());

    return 0;
}

/* SAMPLE OUTPUT
Think of a number between [1-100].
Is it 50? (h/l/c): h
Is it 75? (h/l/c): l
Is it 62? (h/l/c): c
Great! Do you want to play again? (y/n): y
Think of a number between [1-100].
Is it 50? (h/l/c): l
Is it 25? (h/l/c): l
Is it 12? (h/l/c): h
Is it 18? (h/l/c): h
Is it 21? (h/l/c): h
Is it 23? (h/l/c): h
Is it 24? (h/l/c): c
Great! Do you want to play again? (y/n): n

Think of a number between [26-42].
Is it 34? (h/l/c): h
Is it 38? (h/l/c): h
Is it 40? (h/l/c): l
Is it 39? (h/l/c): c
Great! Do you want to play again? (y/n): y
Think of a number between [26-42].
Is it 34? (h/l/c): l
Is it 29? (h/l/c): l
Is it 27? (h/l/c): l
Is it 26? (h/l/c): h
Is it 26? (h/l/c): c
Great! Do you want to play again? (y/n): n
*/
