#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFile;
    int card;
    int sum;
    int counter = 0;

    inputFile.open("cards.txt");
    if (!inputFile)
    {
        cout << "ERROR: Invalid filename. Exiting... \n";
        exit(1);
    }

    while (inputFile >> card)
    {
        sum += card;
        counter++;
    }
    inputFile.close();

    cout << "Total: "
         << sum
         << ", Count: "
         << counter
         << ". Average: "
         << sum / counter
         <<"\n";

    return 0;
}

/* SAMPLE OUTPUT
./a.out
Total: 30, Count: 3. Average: 10
*/
