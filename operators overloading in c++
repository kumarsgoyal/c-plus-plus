/* This program will help you to understand basics of operator overloading.
   The meaning of an operator is always same for variable of basic types like: int, float, double etc.
   For example: To add two integers, + operator is used.
   If there are two objects of a class that contains string as its data members.
   You can redefine the meaning of + operator and use it to concatenate those strings. */


#include <iostream>
using namespace std;

class Test
{
    private:
    int count;

    public:
    Test ():count (5)
    {
    }

    void operator ++ ()
    {
        count = count + 1;
    }
    void Display ()
    {
      cout << "Count: " << count;
    }
};

int main ()
{
    Test t;
    // this calls "function void operator ++()" function
    ++t;
    t.Display ();
    return 0;
}
