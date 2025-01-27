#include <iostream>

using namespace std;

class Recursion{
private:
public:
    void reverseInt(int n)
    {
        if (n >= 10)
        {
            cout << n % 10;
            reverseInt(n / 10);
        }
        else
        {
            cout << n;
        }
    }

    void writeBackwards(string s)
    {
        int length = s.size();
        cout << "Enter writeBackwards with string: " << s << endl;
        if (length > 0)
        {
            cout << "About to write the last character of string: "
                 << s << endl;

            cout << s[length - 1] << endl;
            writeBackwards(s.substr(0, length - 1));
        }
        cout << "Leave writeBackwards with string: " << s << endl;
    }

    void writeBackwards2(string s)
    {
        int length = s.size();
        cout << "Enter writeBackwards2 with string: " << s << endl;
        if (length > 0)
        {
            cout << "About to write the first character of string: "
                 << s << endl;

            writeBackwards2(s.substr(1, length - 1));
            cout << s[0] << endl;
        }
        cout << "Leave writeBackwards2 with string: " << s << endl;
    }

    int sumInts(int start, int end)
    {
        if (start > end)
        {
            return 0;
        }
        else
        {
            int nextSum = sumInts(start + 1, end);
            cout << start << " + " << nextSum << " = " << (start + nextSum) << endl;
            return start + nextSum;
        }
    }
};


int main() {
    Recursion R;
    int n = 2015;
    string s = "abcdefg";
    int start = 3;
    int end = 6;

    cout << "========== Problem 1 ==========" << endl;
    R.reverseInt(n);
    cout << endl;

    cout << "========== Problem 2.1 ==========" << endl;
    R.writeBackwards(s);

    cout << "========== Problem 2.2 ==========" << endl;
    R.writeBackwards2(s);

    cout << "========== Problem 3 ==========" << endl;
    R.sumInts(start, end);

    return 0;
}

/*
========== Problem 1 ==========
5102
========== Problem 2.1 ==========
Enter writeBackwards with string: abcdefg
About to write the last character of string: abcdefg
g
Enter writeBackwards with string: abcdef
About to write the last character of string: abcdef
f
Enter writeBackwards with string: abcde
About to write the last character of string: abcde
e
Enter writeBackwards with string: abcd
About to write the last character of string: abcd
d
Enter writeBackwards with string: abc
About to write the last character of string: abc
c
Enter writeBackwards with string: ab
About to write the last character of string: ab
b
Enter writeBackwards with string: a
About to write the last character of string: a
a
Enter writeBackwards with string: 
Leave writeBackwards with string: 
Leave writeBackwards with string: a
Leave writeBackwards with string: ab
Leave writeBackwards with string: abc
Leave writeBackwards with string: abcd
Leave writeBackwards with string: abcde
Leave writeBackwards with string: abcdef
Leave writeBackwards with string: abcdefg
========== Problem 2.2 ==========
Enter writeBackwards2 with string: abcdefg
About to write the first character of string: abcdefg
Enter writeBackwards2 with string: bcdefg
About to write the first character of string: bcdefg
Enter writeBackwards2 with string: cdefg
About to write the first character of string: cdefg
Enter writeBackwards2 with string: defg
About to write the first character of string: defg
Enter writeBackwards2 with string: efg
About to write the first character of string: efg
Enter writeBackwards2 with string: fg
About to write the first character of string: fg
Enter writeBackwards2 with string: g
About to write the first character of string: g
Enter writeBackwards2 with string: 
Leave writeBackwards2 with string: 
g
Leave writeBackwards2 with string: g
f
Leave writeBackwards2 with string: fg
e
Leave writeBackwards2 with string: efg
d
Leave writeBackwards2 with string: defg
c
Leave writeBackwards2 with string: cdefg
b
Leave writeBackwards2 with string: bcdefg
a
Leave writeBackwards2 with string: abcdefg
========== Problem 3 ==========
6 + 0 = 6
5 + 6 = 11
4 + 11 = 15
3 + 15 = 18
*/