#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b)
    {
        if (a.length() < b.length())
        {
            swap(a, b);
        }

        string result = "";
        int carry = 0;
        int n = a.length();
        int m = b.length();
        int j = m - 1;

        for (int i = n - 1; i >= 0; i--)
        {
            int sum = a[i] - '0' + carry;
            if (j >= 0)
            {
                sum += b[j] - '0';
                j--;
            }
            carry = sum / 2;
            result += to_string(sum % 2);
        }

        if (carry)
        {
            result += to_string(carry);
        }

        reverse(result.begin(), result.end());

        cout << result << endl;
        return result;
    }
};


int main() {
    Solution S;
    string a = "1010";
    string b = "1011";
    S.addBinary(a, b);

    return 0;
}

/*
10101
*/
