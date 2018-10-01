/*
    In this program, Person is a base class, while MathsTeacher and Footballer are derived from Person.
    Person class has two data members - profession and age. It also has two member functions - walk() and talk().
    Both MathsTeacher and Footballer can access all data members and member functions of Person.
    However, MathsTeacher and Footballer have their own member functions as well: teachMaths() and playFootball()
    respectively. These functions are only accessed by their own class.

    In the main() function, a new MathsTeacher object teacher is created.

    Since, it has access to Person's data members, profession and age of teacher is set.
    This data is displayed using the display() function defined in the Person class. Also, the teachMaths()
    function is called, defined in the MathsTeacher class.

    Likewise, a new Footballer object footballer is also created. It has access to Person's data members as well,
    which is displayed by invoking the display() function. The playFootball() function only accessible by the footballer
    is called then after.
*/



#include <iostream>
using namespace std;

class Person
{
     public:
        string profession;
        int age;

        Person(): profession("unemployed"), age(16) { }
        void display()
        {
             cout << "My profession is: " << profession << endl;
             cout << "My age is: " << age << endl;
             walk();
             talk();
        }
        void walk() { cout << "I can walk." << endl; }
        void talk() { cout << "I can talk." << endl; }
};

// MathsTeacher class is derived from base class Person.
class MathsTeacher : public Person
{
    public:
       void teachMaths() { cout << "I can teach Maths." << endl; }
};

// Footballer class is derived from base class Person.
class Footballer : public Person
{
    public:
       void playFootball() { cout << "I can play Football." << endl; }
};

int main()
{
     MathsTeacher teacher;
     teacher.profession = "Teacher";
     teacher.age = 23;
     teacher.display();
     teacher.teachMaths();

     Footballer footballer;
     footballer.profession = "Footballer";
     footballer.age = 19;
     footballer.display();
     footballer.playFootball();

     return 0;
}
