#include "basicStack/ArrayStack.h"
#include <iostream>
#include <string>

bool isBalanced(const std::string& expr)
{
    ArrayStack<char> stack;

    for (char ch : expr)
    {
        if (ch == '{' || ch == '(' || ch == '[')
        {
            stack.push(ch);
        }
        else if (ch == '}' || ch == ')' || ch == ']')
        {
            if (stack.isEmpty())
            {
                return false;
            }
            
            char top = stack.peek();
            if (
                (ch == '}' && top == '{') ||
                (ch == ')' && top == '(') ||
                (ch == ']' && top == '[')
                )
            {
                stack.pop();
            }
            else
            {
                return false;
            }
        }
    }
    
    return stack.isEmpty();
}

int main()
{
    std::string test1 = "{[()]}";
    std::string test2 = "{[(])}";
    std::string test3 = "{[()()]}";
    std::string test4 = "{[}";

    std::cout << "Test 1: " << (isBalanced(test1) ? "Balanced" : "Not Balanced") << std::endl;
    std::cout << "Test 2: " << (isBalanced(test2) ? "Balanced" : "Not Balanced") << std::endl;
    std::cout << "Test 3: " << (isBalanced(test3) ? "Balanced" : "Not Balanced") << std::endl;
    std::cout << "Test 4: " << (isBalanced(test4) ? "Balanced" : "Not Balanced") << std::endl;

    return 0;
}
