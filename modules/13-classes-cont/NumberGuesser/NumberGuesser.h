// Name: Tarik Dahnoun
// Number guesser: Find a user chosen number between 1-100 by asking the user iterative questions

#ifndef NUMBERGUESSER_H
#define NUMBERGUESSER_H

class NumberGuesser
{
private:
    int low;
    int high;
    int currentLow;
    int currentHigh;
    int setMidpoint();
public:
    NumberGuesser(int, int);
    ~NumberGuesser();
    void lower();
    void higher();
    int getCurrentGuess();
    void reset();
};
#endif
