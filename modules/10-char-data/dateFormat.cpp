// Checks if a given C-string is of the format: mmmDDYY.fl, where mmm is 3 lowercase letters, DD and YY and 2 digits, . is a period, and fl is 2 lowercase characters
#include <iostream>

using namespace std;

int main() {
    const int SIZE = 11;  // mmmDDYY.fl
    // char initialStr[SIZE] = "oct1024.td";
    char initialStr[SIZE] = "oct1024.td";

    int charPosition = 0;
    bool properFormat = true; 

    // check mmm
    for (charPosition = 0; charPosition < 3; charPosition++)
    {
        if (isupper(initialStr[charPosition]))
        {
            cout << "BAD1\n";
            properFormat = false; 
        }
    }
    // check DDYY
    for (charPosition = 3; charPosition < 7; charPosition++)
    {
        if (!(isdigit(initialStr[charPosition])))
        {
            cout << "BAD1\n";
            properFormat = false; 
        }
    }
    // check .
    if (initialStr[charPosition] != '.')
    {
        cout << "BAD3\n";
        properFormat = false; 
    }
    charPosition++;
    // check fl
    for (charPosition = 8; charPosition < SIZE; charPosition++)
    {
        if (isupper(initialStr[charPosition]))
        {
            cout << "BAD4\n";
            properFormat = false; 
        }
    }

    if (properFormat)
    {
        cout << "Initial String in proper format: " << initialStr << endl;
    }
    else
    {
        cout << "Initial String is not proper format: " << initialStr << endl;
    }
    
    
    return 0;
}