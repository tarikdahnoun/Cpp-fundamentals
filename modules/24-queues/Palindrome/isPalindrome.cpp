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
        if (!S.push(c) || !Q.enqueue(c))
        {
            throw std::runtime_error("Input string exceeds maximum stack or queue size.");
        }
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

void palindromeInterface()
{
    string s1 = "racecar";
    string s2 = "notracecar";
    string sLong = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";

    try {
        cout << "Value: '" << s1 << (isPalindrome(s1) ? "' is a palindrome" : "' is not a palindrome") << endl;
        cout << "Value: '" << s2 << (isPalindrome(s2) ? "' is a palindrome" : "' is not a palindrome") << endl;
        cout << "Value: '" << sLong << (isPalindrome(sLong) ? "' is a palindrome" : "' is not a palindrome") << endl;
    } catch (const std::runtime_error& e) {
        cerr << "\nException caught: " << e.what() << endl;
    }
}

int main()
{
    palindromeInterface();
    return 0;
}

/* SAMPLE OUTPUT
Value: 'racecar' is a palindrome
Value: 'notracecar' is not a palindrome
Value: 'AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
Exception caught: Input string exceeds maximum stack or queue size.
*/
