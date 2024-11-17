#include <iostream>
#include <cstring>

using namespace std;

struct WinRecord
{
    char* name;
    int wins;
};

void initializeData(WinRecord* standings, int size);
void sortData(WinRecord* standings, int size);
void displayData(WinRecord* standings, int size);

char* getLine() 
{
    const int BUFFER_SIZE = 1000;
    
    char buffer[BUFFER_SIZE];	
    
    cin.getline(buffer, BUFFER_SIZE);	
    
    int length = strlen(buffer);
    
    char *rValue = new char[length + 1];
    
    strncpy(rValue, buffer, length);
    
    return rValue;
}

void initializeData(WinRecord* standings, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter team #" << i + 1 << ": ";
        cin.ignore();
        standings[i].name = getLine();
        cout << "Enter the wins for team #" << i + 1 << ": ";
        cin >> standings[i].wins;
    }
}

void sortData(WinRecord* standings, int size)
{
    bool swap;
    char* tmp_name;
    int tmp_win;
    do
    {
        swap = false;
        for (int count = 0; count < (size - 1); count++)
        {
            if (standings[count].wins < standings[count + 1].wins)
            {
                tmp_name = standings[count].name;
                tmp_win = standings[count].wins;
                standings[count].name = standings[count + 1].name;
                standings[count + 1].name = tmp_name;
                standings[count].wins = standings[count + 1].wins;
                standings[count + 1].wins = tmp_win;
                swap = true;
            }
        }
    }
    while (swap);
}

void displayData(WinRecord* standings, int size)
{
    cout << "\nLeague Standings: \n";
    for (int i = 0; i < size; i++)
    {
        cout << standings[i].name << ": " << standings[i].wins << "\n";
    }
}

int main()
{
    int teamSize;

    cout << "How many teams will you enter?: ";
    cin >> teamSize;

    WinRecord* WinRecordList = new WinRecord[teamSize];
    initializeData(WinRecordList, teamSize);
    sortData(WinRecordList, teamSize);
    displayData(WinRecordList, teamSize);

    for (int i = 0; i < teamSize; i++)
    {
        delete [] WinRecordList[i].name;
    }
    
    delete [] WinRecordList;

    return 0;
}

/* SAMPLE OUTPUT
How many teams will you enter?: 4     
Enter team #1: Padres
Enter the wins for team #1: 75
Enter team #2: Dodgers
Enter the wins for team #2: 91
Enter team #3: Giants
Enter the wins for team #3: 92
Enter team #4: Cubs
Enter the wins for team #4: 65

League Standings: 
Giants: 92
Dodgers: 91
Padres: 75
Cubs: 65
*/
