// Name: Tarik Dahnoun
// Number guesser: Find a user chosen number between 1-100 by asking the user iterative questions

#include <iostream>
#include "NumberGuesser.h"

using namespace std;


NumberGuesser::NumberGuesser(int l, int h)
{
    int min = 0;
    int max = 100;
    if (l < min || h < min || l > max || h > max)
    {
        cout << "ERROR: Values must be between [" << min << "-" << max << "]." << endl;
        exit(1);
    }

    low = l;
    high = h;
    currentLow = low;
    currentHigh = high;
}


NumberGuesser::~NumberGuesser()
{
}

int NumberGuesser::setMidpoint()
{
    int midpointValue;

    midpointValue = (currentLow + currentHigh)/2;
    return midpointValue;
}


void NumberGuesser::lower()
{   currentHigh = setMidpoint() - 1;    }


void NumberGuesser::higher()
{    currentLow = setMidpoint() + 1;    }


int NumberGuesser::getCurrentGuess()
{   return setMidpoint();   }


void NumberGuesser::reset()
{
    currentLow = low;
    currentHigh = high;
}
