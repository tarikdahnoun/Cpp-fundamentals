#include <iostream>

using namespace std;

void initializeArrays(string names[], int wins[], int size);
void sortArray(string names[], int wins[], int size);
void displayData(string names[], int wins[], int size);

void initializeArrays(string names[], int wins[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter team #" << i + 1 << ": ";
        cin >> names[i];
        cout << "Enter the wins for team #" << i + 1 << ": ";
        cin >> wins[i];
    }
}

void sortArray(string names[], int wins[], int size)
{
    bool swap;
    string tmp_name;
    int tmp_win;
    do
    {
        swap = false;
        for (int count = 0; count < (size - 1); count++)
        {
            if (wins[count] < wins[count + 1])
            {
                tmp_name = names[count];
                tmp_win = wins[count];

                names[count] = names[count + 1];
                names[count + 1] = tmp_name;
                wins[count] = wins[count + 1];
                wins[count + 1] = tmp_win;

                swap = true;
            }
        }
    }
    while (swap);
}

void displayData(string names[], int wins[], int size)
{
    cout << "\nLeague Standings: \n";
    for (int i = 0; i < size; i++)
    {
        cout << names[i] << ": " << wins[i] << "\n";
    }
}

int main()
{
    string *teamPtr = NULL;
    int *scorePtr = NULL;
    int teamSize;

    cout << "How many teams will you enter?: ";
    cin >> teamSize;

    teamPtr = new string[teamSize];
    scorePtr = new int[teamSize];

    initializeArrays(teamPtr, scorePtr, teamSize);
    sortArray(teamPtr, scorePtr, teamSize);
    displayData(teamPtr, scorePtr, teamSize);

    delete [] teamPtr;
    teamPtr = NULL;

    delete [] scorePtr;
    scorePtr = NULL;

    return 0;
}

