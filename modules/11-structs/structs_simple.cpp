#include <iostream>

using namespace std;

int main() {
    struct SalesRecord
    {
        string burriotType;
        int burritoSold;
    };

    int SIZE;
    cout << "Enter number of burrito types sold: ";
    cin >> SIZE;
    cout << endl;

    SalesRecord* SalesRecordList = new SalesRecord[SIZE];
    int totalSold = 0;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter burrito type: ";
        cin >> SalesRecordList[i].burriotType;
        cout << "Enter number of burritos sold: ";
        cin >> SalesRecordList[i].burritoSold;

        totalSold += SalesRecordList[i].burritoSold;
    }

    cout << endl << "Daily sales report: \n---\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << SalesRecordList[i].burriotType << "\n";
        cout << SalesRecordList[i].burritoSold << "\n";
    }
    cout << "Total burritos sold: " << totalSold << endl;
    
    delete [] SalesRecordList;
    return 0;
}

/* SAMPLE OUTPUT
Enter number of burrito types sold: 3

Enter burrito type: Carnitas
Enter number of burritos sold: 5
Enter burrito type: Pollo 
Enter number of burritos sold: 10
Enter burrito type: Veggie
Enter number of burritos sold: 15

Daily sales report: 
---
Carnitas
5
Pollo
10
Veggie
15
Total burritos sold: 30
*/
