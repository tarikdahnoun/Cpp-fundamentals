# Characters, C-strings, string class

## Strings Quickstart
```
#include <string>
```

| Definition                          | Description                                                                                                                             |
|-------------------------------------|-----------------------------------------------------------------------------------------------------------------------------------------|
| `string address;`                   | Defines an empty string object named `address`.                                                                                         |
| `string name("William Smith");`      | Defines a string object named `name`, initialized with "William Smith".                                                                 |
| `string person1(person2);`          | Defines a string object named `person1`, which is a copy of `person2`. `person2` may be either a string object or character array.       |
| `string set1(set2, 5);`             | Defines a string object named `set1`, initialized to the first five characters in the character array `set2`.                            |
| `string lineFull('z', 10);`         | Defines a string object named `lineFull`, initialized with 10 'z' characters.                                                           |
| `string firstName(fullName, 0, 7);` | Defines a string object named `firstName`, initialized with a substring of the string `fullName`. The substring is seven characters long, beginning at position 0. |

## String Operators
| Operator  | Description                                                                                                                                   |
|-----------|-----------------------------------------------------------------------------------------------------------------------------------------------|
| `>>`      | Extracts characters from a stream and inserts them into the string. Characters are copied until a whitespace or the end of the string is encountered. |
| `<<`      | Inserts the string into a stream.                                                                                                             |
| `=`       | Assigns the string on the right to the string object on the left.                                                                              |
| `+=`      | Appends a copy of the string on the right to the string object on the left.                                                                    |
| `+`       | Returns a string that is the concatenation of the two string operands.                                                                         |
| `[]`      | Implements array-subscript notation, as in `name[x]`. A reference to the character in the `x` position is returned.                            |


## Character functions
| Character Function | Description                                                                                                                                       |
|--------------------|---------------------------------------------------------------------------------------------------------------------------------------------------|
| `isalpha`          | Returns true (a nonzero number) if the argument is a letter of the alphabet. Returns 0 if the argument is not a letter.                           |
| `isalnum`          | Returns true (a nonzero number) if the argument is a letter of the alphabet or a digit. Otherwise, it returns 0.                                  |
| `isdigit`          | Returns true (a nonzero number) if the argument is a digit from 0 through 9. Otherwise it returns 0.                                              |
| `islower`          | Returns true (a nonzero number) if the argument is a lowercase letter. Otherwise, it returns 0.                                                   |
| `isprint`          | Returns true (a nonzero number) if the argument is a printable character (including a space). Returns 0 otherwise.                                |
| `ispunct`          | Returns true (a nonzero number) if the argument is a printable character other than a digit, letter, or space. Returns 0 otherwise.               |
| `isupper`          | Returns true (a nonzero number) if the argument is an uppercase letter. Otherwise, it returns 0.                                                  |
| `isspace`          | Returns true (a nonzero number) if the argument is a whitespace character. Whitespace characters are any of the following: (list to follow).       |

## C-string Functions
```
#include <cstring>
char name[] = "Thomas Edison";
int length;
length = strlen(name);
```


| Function  | Description                                                                                                                                                                                                                                                                      |
|-----------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| `strlen`  | Accepts a C-string or a pointer to a C-string as an argument. Returns the length of the C-string (not including the null terminator). Example Usage: `len = strlen(name);`                                                                                                        |
| `strcat`  | Accepts two C-strings or pointers to two C-strings as arguments. The function appends the contents of the second string to the first C-string. (The first string is altered, the second string is left unchanged.) Example Usage: `strcat(string1, string2);`                     |
| `strcpy`  | Accepts two C-strings or pointers to two C-strings as arguments. The function copies the second C-string to the first C-string. The second C-string is left unchanged. Example Usage: `strcpy(string1, string2);`                                                                 |
| `strncat` | Accepts two C-strings or pointers to two C-strings, and an integer argument. The third argument, an integer, indicates the maximum number of characters to copy from the second C-string to the first C-string. Example Usage: `strncat(string1, string2, n);`                    |
| `strncpy` | Accepts two C-strings or pointers to two C-strings, and an integer argument. The third argument indicates the maximum number of characters to copy from the second C-string to the first. If `n` is less than the length of string2, the null terminator is not automatically appended. If `n` is greater, string1 is padded with ‘\0’ characters. Example Usage: `strncpy(string1, string2, n);` |
| `strcmp`  | Accepts two C-strings or pointers to two C-strings. If string1 and string2 are the same, the function returns 0. If string2 is alphabetically greater than string1, it returns a negative number. If string2 is alphabetically less, it returns a positive number. Example Usage: `if (strcmp(string1, string2))` |
| `strstr`  | Accepts two C-strings or pointers to two C-strings as arguments. Searches for the first occurrence of string2 in string1. If found, returns a pointer to it. Otherwise, returns `nullptr` (address 0). Example Usage: `cout << strstr(string1, string2);`                          |

## C-string to Type Conversions
| Function | Description                                                                                                                                                  |
|----------|--------------------------------------------------------------------------------------------------------------------------------------------------------------|
| `atoi`   | Accepts a C-string as an argument. The function converts the C-string to an integer and returns that value. Example Usage: `int num = atoi("4569");`           |
| `atol`   | Accepts a C-string as an argument. The function converts the C-string to a long integer and returns that value. Example Usage: `long lnum = atol("500000");`    |
| `atof`   | Accepts a C-string as an argument. The function converts the C-string to a double and returns that value. Example Usage: `double fnum = atof("3.14159");`       |

## Type to String Conversions
| Function                       | Description                                                                                                                |
|--------------------------------|----------------------------------------------------------------------------------------------------------------------------|
| `to_string(int value)`         | Accepts an `int` argument and returns that argument converted to a string object.                                           |
| `to_string(long value)`        | Accepts a `long` argument and returns that argument converted to a string object.                                           |
| `to_string(long long value)`   | Accepts a `long long` argument and returns that argument converted to a string object.                                      |
| `to_string(unsigned value)`    | Accepts an `unsigned` argument and returns that argument converted to a string object.                                      |
| `to_string(unsigned long value)` | Accepts an `unsigned long` argument and returns that argument converted to a string object.                                 |
| `to_string(unsigned long long value)` | Accepts an `unsigned long long` argument and returns that argument converted to a string object.                        |
| `to_string(float value)`       | Accepts a `float` argument and returns that argument converted to a string object.                                          |
| `to_string(double value)`      | Accepts a `double` argument and returns that argument converted to a string object.                                         |
| `to_string(long double value)` | Accepts a `long double` argument and returns that argument converted to a string object.                                    |

## String Module Functions
| Member Function                 | Example                           | Description                                                                                                          |
|----------------------------------|-----------------------------------|----------------------------------------------------------------------------------------------------------------------|
| `mystring.append(n, 'z');`       | `mystring.append(n, 'z');`        | Appends `n` copies of 'z' to `mystring`.                                                                             |
| `mystring.append(str);`          | `mystring.append(str);`           | Appends `str` to `mystring`. `str` can be a string object or character array.                                         |
| `mystring.append(str, n);`       | `mystring.append(str, n);`        | The first `n` characters of the character array `str` are appended to `mystring`.                                     |
| `mystring.append(str, x, n);`    | `mystring.append(str, x, n);`     | `n` characters from `str`, starting at position `x`, are appended to `mystring`.                                      |
| `mystring.assign(n, 'z');`       | `mystring.assign(n, 'z');`        | Assigns `n` copies of 'z' to `mystring`.                                                                             |
| `mystring.assign(str);`          | `mystring.assign(str);`           | Assigns `str` to `mystring`. `str` can be a string object or character array.                                         |
| `mystring.assign(str, n);`       | `mystring.assign(str, n);`        | The first `n` characters of the character array `str` are assigned to `mystring`.                                     |
| `mystring.assign(str, x, n);`    | `mystring.assign(str, x, n);`     | `n` characters from `str`, starting at position `x`, are assigned to `mystring`.                                      |
| `mystring.at(x);`                | `mystring.at(x);`                 | Returns the character at position `x` in the string.                                                                 |
| `mystring.back();`               | `mystring.back();`                | Returns the last character in the string (introduced in C++ 11).                                                     |
| `mystring.begin();`              | `mystring.begin();`               | Returns an iterator pointing to the first character in the string.                                                   |
| `mystring.c_str();`              | `mystring.c_str();`               | Converts the contents of `mystring` to a C-string, and returns a pointer to the C-string.                             |
| `mystring.capacity();`           | `mystring.capacity();`            | Returns the size of the storage allocated for the string.                                                            |
| `mystring.clear();`              | `mystring.clear();`               | Clears the string by deleting all the characters stored in it.                                                       |
| `mystring.compare(str);`         | `mystring.compare(str);`          | Performs a comparison like `strcmp`. `str` can be a string object or a character array.                               |
| `mystring.compare(x, n, str);`   | `mystring.compare(x, n, str);`    | Compares `mystring` and `str` starting at position `x` for `n` characters.                                           |
| `mystring.copy(str, x, n);`      | `mystring.copy(str, x, n);`       | Copies the character array `str` to `mystring`, beginning at position `x`, for `n` characters.                       |
| `mystring.empty();`              | `mystring.empty();`               | Returns true if `mystring` is empty.                                                                                 |
| `mystring.end();`                | `mystring.end();`                 | Returns an iterator pointing to the last character of the string in `mystring`.                                       |
| `mystring.erase(x, n);`          | `mystring.erase(x, n);`           | Erases `n` characters from `mystring`, beginning at position `x`.                                                    |
| `mystring.find(str, x);`         | `mystring.find(str, x);`          | Returns the first position at or beyond position `x` where the string `str` is found in `mystring`.                  |
| `mystring.find('z', x);`         | `mystring.find('z', x);`          | Returns the first position at or beyond position `x` where 'z' is found in `mystring`.                               |
| `mystring.front();`              | `mystring.front();`               | Returns the first character in the string (introduced in C++ 11).                                                    |
| `mystring.insert(x, n, 'z');`    | `mystring.insert(x, n, 'z');`     | Inserts 'z' `n` times into `mystring` at position `x`.                                                               |
| `mystring.insert(x, str);`       | `mystring.insert(x, str);`        | Inserts a copy of `str` into `mystring`, beginning at position `x`. `str` may be either a string object or a character array. |
| `mystring.length();`             | `mystring.length();`              | Returns the length of the string in `mystring`.                                                                      |
| `mystring.replace(x, n, str);`   | `mystring.replace(x, n, str);`    | Replaces `n` characters in `mystring` beginning at position `x` with the characters in the string object `str`.       |
| `mystring.resize(n, 'z');`       | `mystring.resize(n, 'z');`        | Changes the size of the allocation in `mystring` to `n`. If `n` is less than the current size, the string is truncated. If `n` is greater, 'z' is appended. |
| `mystring.size();`               | `mystring.size();`                | Returns the length of the string in `mystring`.                                                                      |
| `mystring.substr(x, n);`         | `mystring.substr(x, n);`          | Returns a copy of a substring that is `n` characters long and begins at position `x` of `mystring`.                  |
| `mystring.swap(str);`            | `mystring.swap(str);`             | Swaps the contents of `mystring` with `str`.                                                                         |



