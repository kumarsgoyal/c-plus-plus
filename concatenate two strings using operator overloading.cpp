/*
    Alisha always gets confused with the operators used with strings. When she has to concatenate
    two strings suppose string1 and string2, she used to write string1+string2. And when she has to compare whether 
    the two strings are equal or first string is greater or smaller than string 2 again she writes
    like string1==string2,string1>strin2 and string1<string2. Which gives the error in program as these
    operators does not work with strings directly. So, help out her to work these operators with strings directly.
    Sample Input 1 :
    C++                      // string 1
    Programming      // string 2

    Sample Output 1 :
    Concatenated strings are : C++Programming
    Are the strings equal : Both are unequal
    Is string1 smaller than string2 : Yes
    Is string1 larger than string2 : No

    Sample Input 2 :
    Program
    Program
            
    Sample Output 2 :
    Concatenated strings are : C++Program Learning
    Are the strings equal : Both are equal    
    Is string1 smaller than string2 : No
    Is string1 larger than string2 : No
*/

#include <string>
#include <iostream>
using namespace std;

class strings
{
    char str[100];
public:
    strings ()
    {
    }
    void read ();
    void operator + (strings);
    void operator == (strings);
    void operator > (strings);
    void operator < (strings);
};

int l1 = 0, l2 = 0;
char str1[100];

void strings::read ()
{
    gets (str);
}

void strings::operator+ (strings a)
{
    l1 = strlen (str);
    l2 = strlen (a.str);
    strcpy (str1, str);
    strcat (str, a.str);
    cout << str << endl;
}

void strings::operator== (strings a)
{

    if (strcmp (str1, a.str) == 0)
    {
        cout << "Both are equal" << endl;
    }
    else
    {
        cout << "Both are unequal" << endl;
    }
}

void strings::operator< (strings a)
{
    if (l1 < l2)
    {
        cout << "Yes" << endl;
    }
    else if (l1 == l2)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

void strings::operator> (strings a)
{
    if (l1 > l2)
    {
        cout << "Yes" << endl;
    }
    else if (l1 == l2)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main ()
{
    strings string1, string2;
    string1.read ();
    string2.read ();
    cout << "Concatenated strings are : ";
    string1 + string2;
    cout << "Are the strings equal : ";
    string1 == string2;
    cout << "Is string1 smaller than string2 : ";
    string1 < string2;
    cout << "Is string1 larger than string2 : ";
    string1 > string2;
    return 0;
}
