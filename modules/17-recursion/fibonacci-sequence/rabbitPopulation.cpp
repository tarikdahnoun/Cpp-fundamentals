#include <iostream>
#include <chrono>

using namespace std;

class RabbitPopulation{
private:
public:
    int rabbitsRecursive(int months)
    {
        if (months == 1 || months == 2)
        {
            return 1;
        }
        else
        {
            return rabbitsRecursive(months - 1) + rabbitsRecursive(months - 2);
        }        
    }

    int rabbitsIterative(int months)
    {
        int current = 1, next = 1, previous = 1;
        for (int i = 3; i <= months; i++)
        {
            next = current + previous;

            previous = current;
            current = next;
        }
        
        return next;
    }
};


int main() {
    RabbitPopulation S;
    int months;

    cout << "Enter the number of months: ";
    cin >> months;
    if (months <= 0)
    {
        cout << "ERROR: Number of months must be a positive integer. " << endl;
        return 1;
    }

    chrono::high_resolution_clock::time_point start = chrono::high_resolution_clock::now();
    int rabbitsRecursive = S.rabbitsRecursive(months);
    chrono::high_resolution_clock::time_point end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;
    cout << "========== Recursive Approach ==========\n" 
         << "Total rabbits after "
         << months
         << " months is: "
         << rabbitsRecursive
         << endl
         << "Calculating with a recursive approach takes approximately: "
         << duration.count()
         << " seconds. \n";


    start = chrono::high_resolution_clock::now();
    int rabbitsIterative = S.rabbitsIterative(months);
    end = chrono::high_resolution_clock::now();
    duration = end - start;
    cout << "========== Iterative Approach ==========\n" 
         << "Total rabbits after "
         << months
         << " months is: "
         << rabbitsIterative
         << endl
         << "Calculating with an iterative approach takes approximately: "
         << duration.count()
         << " seconds. \n";

    return 0;
}

/*
Enter the number of months: 5
========== Recursive Approach ==========
Total rabbits after 5 months is: 5
Calculating with a recursive approach takes approximately: 1.058e-06 seconds. 
========== Iterative Approach ==========
Total rabbits after 5 months is: 5
Calculating with an iterative approach takes approximately: 1.14e-07 seconds.

Enter the number of months: 15
========== Recursive Approach ==========
Total rabbits after 15 months is: 610
Calculating with a recursive approach takes approximately: 5.1e-06 seconds. 
========== Iterative Approach ==========
Total rabbits after 15 months is: 610

Enter the number of months: 45
========== Recursive Approach ==========
Total rabbits after 45 months is: 1134903170
Calculating with a recursive approach takes approximately: 6.52398 seconds. 
========== Iterative Approach ==========
Total rabbits after 45 months is: 1134903170
Calculating with an iterative approach takes approximately: 2.36e-07 seconds.
*/