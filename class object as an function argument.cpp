// class object as an function argument.
// in this function take two obj argument and add them
// if minutes go beyond 60 it will increment an hour and decrease min by 60.


#include <iostream>
using namespace std;

class times
{
	int hour;
	int min;
public:
	void gett(void)
	{
		cout<<"enter time hours and min"<<endl;
		cin>>hour>>min;
	}
	void putt(void)
	{
		cout<<"hours"<<hour<<"and mins"<<min<<endl;
	}
	void sum(times,times);
};

void times::sum(times t1,times t2)
{
	min=t1.min+t2.min;
	hour=min/60;
	min=min%60;
	hour=hour+t1.hour+t2.hour;
}

int main()
{
	times t1,t2,t3;
	t1.gett();
	t2.gett();
	t3.sum(t1,t2);
	cout<<"1st entered timed is: ";
	t1.putt();
	cout<<"2nd entered time is: ";
	t2.putt();
	cout<<"total time is: ";
	t3.putt();
	return 0;
}
