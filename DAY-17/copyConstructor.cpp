// copy constructor - copy informetion one object to another object

#include<iostream>
using namespace std;

class student
{
    string name;
    int roll;
    int mark;

    public:
    student(string name, int roll, int mark)
    {
        this->name = name;
        this->roll = roll;
        this->mark = mark;
    }
    // Create copy construction --> Not need
    student(student &A)
    {
        this->name = A.name;
        this->roll = A.roll;
        this->mark = A.mark;
    }


    void display()
    {
        cout<<"name = "<<name<<endl;
        cout<<"roll = "<<roll<<endl;
        cout<<"mark = "<<mark<<endl;
    }
};
int main()
{
    student s1("Rahul", 123, 455);
    // s1.display();

    student s2(s1);
    s2.display();

return 0;
};