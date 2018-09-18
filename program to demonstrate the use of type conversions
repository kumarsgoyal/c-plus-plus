/*   Write a program to demonstrate the use of type conversions with Distance class.
     
     Sample Input :
     1234  //distance in metres
     Sample Output :
     1.234 //distance in kilometres
*/



#include <iostream>
using namespace std;

class Distance
{
    int km,m;
public:
    Distance()
    {
        km=0;
        m=0;
    }
    Distance (int);
    operator float ();
};

Distance::Distance (int a)
{
    km = a / 1000;
    m = a % 1000;
}

Distance::operator  float ()
{
    km = km * 1000 + m;
    return (float) km / 1000;
}

int main ()
{
    int dist;
    cin >> dist;
    Distance d1;
    d1 = dist;
    float k = d1;
    cout << k;
    return 0;
}
