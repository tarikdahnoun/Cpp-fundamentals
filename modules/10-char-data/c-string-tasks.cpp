// Name: Tarik Dahnoun
// Date: 10/21/2024
//

#include <iostream>
#include <cstring>

using namespace std;

int lastIndexOf(char *s, char target);
void reverse(char *s);
int replace(char *s, char target, char replacementChar);
int findSubstring(char *s, char substring[]);
bool isPalindrome(char *s);

int lastIndexOf(char *s, char target)
{
    int i = 0;  // Change to len name

    while (s[i] != '\0')
    {
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        if (s[j] == target)
        {
            return j;
        }
       
    }

    return -1;
}

void reverse(char *s)
{
    int len = strlen(s);

    int i = 0;
    int j = len - 1;
    char temp;

    while (i < j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    
    cout << s;
}


int replace(char *s, char target, char replacementChar)
{
    int len = strlen(s);
    char *sCopy = new char[len + 1];
    strncpy(sCopy, s, len);
    sCopy[len] = '\0';
    int replacementCount = 0;


    for (int i = 0; i < len; i++)
    {
        if (sCopy[i] == target)
        {
            sCopy[i] = replacementChar;
            replacementCount++;
        }
    }

    cout << sCopy;    
    delete [] sCopy;
    return replacementCount;
}

int findSubstring(char *s, char substring[])
{
    int len = strlen(s);
    int substrLen = strlen(substring);
    int substrIndex = -1;

    for (int i = 0; i < len - substrLen; i++)
    {
        int j;
        if (s[i] == substring[0])
        {
            substrIndex = i;

            for (j = 0; j < substrLen; j++)
            {
                if (s[i + j] != substring[j])
                {
                    break;
                }
            }

            if (j == substrLen)
            {
                return substrIndex;
            }
            
            substrIndex = -1;
        }
    }

    return substrIndex;
}

bool isPalindrome(char *s)
{
    int len = strlen(s);
    char *sCopy = new char[len + 1];
    strncpy(sCopy, s, len);
    sCopy[len] = '\0';

    reverse(sCopy);
    bool result = (strcmp(s, sCopy) == 0);
    delete [] sCopy;
    return result;
}


int main() {
    // char str[] = "racecar";
    char str[] = "Just some random long string thing";
    char target = 'o';
    int len = strlen(str);

    int lastIndex = lastIndexOf(str, target);
    cout << "1. The last position of \"" << target << "\" in \"" << str << "\" is: " << lastIndex << endl;

    cout << "2. The reverse of \"" << str << "\" is: \"";
    char tempStr[len];
    strncpy(tempStr, str, len);
    tempStr[len] = '\0';
    reverse(tempStr);
    cout << "\"" << endl;

    char replacement = 'z';
    cout << "3. The original string \"" << str << "\" is replaced with: \"";
    int numReplacements = replace(str, target, replacement);
    cout << "\" for a total of " << numReplacements << " replacements. " << endl;

    char substring[] = "and";
    int substrIndex = findSubstring(str, substring);
    cout << "4. The position of the substring \"" << substring << "\" in \"" << str << "\" is: " << substrIndex << endl;

    cout << "5. The backward string: ";
    if (isPalindrome(str))
    {
        cout << " is a palindrone" << endl;
    }
    else
    {
        cout << " is not a palindrone" << endl;
    }


    return 0;
}

/* SAMPLE OUTPUT


*/