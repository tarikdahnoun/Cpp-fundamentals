#include <iostream>
#include <cctype>
#include "LinkedListStack.h"

using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

string infixToPostfix(const string &infix) {
    LinkedListStack<char> operators;
    string postfix = "";

    for (char c : infix) {
        if (isdigit(c)) {
            postfix += c;
        } else if (c == '(') {
            operators.push(c);
        } else if (c == ')') {
            while (!operators.isEmpty() && operators.peek() != '(') {
                postfix += operators.peek();
                operators.pop();
            }
            operators.pop();
        } else {
            while (!operators.isEmpty() && precedence(operators.peek()) >= precedence(c)) {
                postfix += operators.peek();
                operators.pop();
            }
            operators.push(c);
        }
    }

    while (!operators.isEmpty()) {
        postfix += operators.peek();
        operators.pop();
    }

    return postfix;
}

int evaluatePostfix(const string &postfix) {
    LinkedListStack<int> values;

    for (char c : postfix) {
        if (isdigit(c)) {
            values.push(c - '0');
        } else {
            int b = values.peek(); values.pop();
            int a = values.peek(); values.pop();

            if (c == '/' && b == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
                return 0;
            }

            switch (c) {
                case '+': values.push(a + b); break;
                case '-': values.push(a - b); break;
                case '*': values.push(a * b); break;
                case '/': values.push(a / b); break;
            }
        }
    }

    return values.peek();
}


int main() {
    string infix;
    cout << "Enter infix expression: ";
    cin >> infix;

    string postfix = infixToPostfix(infix);
    cout << "Postfix Expression: " << postfix << endl;

    int result = evaluatePostfix(postfix);
    cout << "Result: " << result << endl;

    return 0;
}

/* SAMPLE OUTPUT
Enter infix expression: 3/0
Postfix Expression: 30/
Error: Division by zero is not allowed.
Result: 0

Enter infix expression: 5+5-(3*9)/2
Postfix Expression: 55+39*2/-
Result: -3

Enter infix expression: 3/2
Postfix Expression: 32/
Result: 1
*/
