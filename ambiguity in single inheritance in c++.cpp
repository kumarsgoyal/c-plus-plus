/*
    If parent and child classes have same named method, parent name and scope resolution operator(::) is used.
    This is done to distinguish the method of child and parent class since both have same name.
*/


#include<iostream>
#include<conio.h>
using namespace std;

// Base class
class staff
{
    private:
        char name[50];
        int code;
    public:
        void getdata();
        void display();
};

// Derived class
class typist: public staff
{
    private:
        int speed;
    public:
        void getdata();
        void display();
};


void staff::getdata()
{
    cout<<"Name:";
    gets(name);
    cout<<"Code:";
    cin>>code;
}

void staff::display()
{
    cout<<"Name:"<<name<<endl;
    cout<<"Code:"<<code<<endl;
}

void typist::getdata()
{
    cout<<"Speed:";
    cin>>speed;
}

void typist::display()
{
    cout<<"Speed:"<<speed<<endl;
}

int main()
{
    typist t;
    
    cout<<"Enter data"<<endl;
    
    t.staff::getdata();
    t.getdata();
    
    cout<<endl<<"Display data"<<endl;
    t.staff::display();
    t.display();
    return 0;
}
