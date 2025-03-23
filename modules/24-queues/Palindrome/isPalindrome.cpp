#include <iostream>
#include "Stack/ArrayStack.h"
#include "Stack/ArrayStack.cpp"
#include "Queue/ArrayQueue.cpp"
#include "Queue/ArrayQueue.h"

bool isPalindrome(string inputStr)
{
    ArrayStack<char> S;
    ArrayQueue Q;

    for (char c : inputStr)
    {
        S.push(c);
        Q.enqueue(c);
    }

    for (int i = 0; i < inputStr.length(); i++)
    {
        if (S.peek() != Q.peek())
        {
            return false;
        }

        S.pop();
        Q.dequeue();        
    }

    return true;
}


int main()
{
    string s1 = "racecar";
    string s2 = "notracecar";

    cout << "s1 isPalindrome: " << isPalindrome(s1) << endl;
    cout << "s2 isPalindrome: " << isPalindrome(s2) << endl;

    return 0;
}
