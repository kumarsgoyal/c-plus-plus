// Write a C++ program to add, subtract and multiply two matrices using operator overloading.
/* Sample Input :
   2 3 4  // First Matrix
   4 5 6
   1 4 2
   
   4 8 8  // Second matrix
   1 1 1
   1 1 1

   Sample Output :
   6 11 12 //Addition of Matrices
   5 6 7
   2 5 3
   
   -2 -5 -4  //Subtraction of Matrices
   3 4 5
   0 3 1

  15 23 23  //Product of Matrices
  27 43 43
  10 14 14
*/

#include <iostream>
using namespace std;


class mat
{
    int a[3][3];
public:
    mat ();
    void getdata ();
    mat operator + (mat);
    mat operator - (mat);
    mat operator * (mat);
    void disp ();
};

mat::mat ()
{

}

void mat::getdata ()
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
	    {
	       cin >> a[i][j];
     	}
    }
}

mat mat::operator + (mat b)
{
    mat c;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
     	{
	        c.a[i][j] = a[i][j] + b.a[i][j];
    	}
    }
    return c;
}

mat mat::operator - (mat b)
{
    mat c;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
    	{
	        c.a[i][j] = a[i][j] - b.a[i][j];
    	}
    }
    return c;
}

mat mat::operator * (mat b)
{
    mat c;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
	   {
	       c.a[i][j] = 0;
	   }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
	    {
	        for (k = 0; k < 3; k++)
	        {
	            c.a[i][j] += a[i][k] * b.a[k][j];
	        }
	    }
    }
    return c;
}

void mat::disp ()
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
    	{
	        cout << a[i][j] << " ";
	    }
        cout << endl;
    }
}

int main ()
{
    mat m1, m2, m3;
    m1.getdata ();
    m2.getdata ();
    m3 = m1 + m2;
    m3.disp ();
    cout << endl;
    m3 = m1 - m2;
    m3.disp ();
    cout << endl;
    m3 = m1 * m2;
    m3.disp ();
    return 0;
}

 
