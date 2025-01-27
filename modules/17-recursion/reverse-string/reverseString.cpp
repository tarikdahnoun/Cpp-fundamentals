#include <iostream>

using namespace std;

class ReverseString{
private:
public:
    void reverse1(string s)
    {
        int length = s.size();
        if (length > 0)
        {
            cout << s[length-1];
            reverse1(s.substr(0, length-1));
        }
    }

    void reverse2(string s)
    {
        int length = s.size();
        if (length > 0)
        {
            reverse2(s.substr(1, length - 1));
            cout << s[0];
        }
        
    }
};


int main() {
    ReverseString S;
    string s = "abcdefghij";

    S.reverse1(s);
    cout << endl;

    S.reverse2(s);
    cout << endl;

    return 0;
}