#include <iostream>

using namespace std;

int main() {
    const int SIZE = 3;
    
    string names[SIZE] = {"Carnitas", "Pollo", "Veggie"};
    float prices[SIZE] = {6.95, 6.25, 5.95};

    string *namesPtr = NULL;
    float *pricesPtr = NULL;
    namesPtr = names;
    pricesPtr = prices;

    cout << "New Menu\n-----\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << *(namesPtr + i) + " Especial" << endl; 
        cout << *(pricesPtr + i) + 2.00 << endl; 
    }
    
    return 0;
}
