/* You are given a task to perform addition of two distance which are given in kilometer(km) and meter(m). Also check if sum of meters is more than 1000, then you need to increment kilometers.

   Sample Input
   2        kilometer of 1st distance
   100      meter of 1st distance
   3        kilometer of 2nd distance
   500      meter of 2nd distance

   Sample Output
   5        sum of kilometer(2 and 3)
   600      sum of meter(100 and 500)
   
   */
   
   
#include <iostream>
using namespace std;

class sum
{
    int km, m;
public:
    sum ();
    void getdata ();
    void showdata ();
    sum operator + (sum &);
};

sum::sum ()
{

}

void sum::getdata ()
{
    cin >> km;
    cin >> m;
}

void sum::showdata ()
{
    cout << km << endl << m;
}

sum sum::operator + (sum & a)
{
    sum c;
    c.km = km + (a.km);
    c.m = m + (a.m);
    if (c.m >= 1000)
    {
        c.m = c.m - 1000;
        c.km = c.km + 1;
    }
    return c;
}

int main ()
{
    sum d1, d2, d3;
    d1.getdata ();
    d2.getdata ();
    d3 = d1 + d2;
    d3.showdata ();
    return 0;
}
