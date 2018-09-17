// Write a C++ program to overload unary operator ++ and – to work with counter class object.
// The counter class should have one data member as count.


#include <iostream>

using namespace std;
class counter
{
    int count;
public:
    counter ();
    counter (int);
    void operator ++ ();
    void operator ++ (int);
    void operator - ();
    void show ();
};
counter::counter (int a)
{
    count = a;
}

void counter::operator ++ (int)
{
    count++;
}

void counter::operator ++ ()
{
    ++count;
}

void counter::operator - ()
{
    count = -count;
}

void counter::show ()
{
    cout << count << endl;
}

int main ()
{
    int c;
    cin >> c;
    counter c1 (c);
    ++c1;
    c1.show ();
    c1++;
    c1.show ();
    -c1;
    c1.show ();
    return 0;
}
