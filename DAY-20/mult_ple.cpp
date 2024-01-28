// Multiple Inheritance 

#include<iostream>
using namespace std;

class Person
{
    protected:
    string name;
    int age;

    public:
    void display()
    {
        cout<<"I am "<<name<<" namd My age is : "<<age<<endl;
    }
};

class Engineer
{
    protected:
    string dept;

    public:
    void tell_dept()
    {
        cout<<"My depernment is "<<dept<<endl;
    }
};

class Teacher : public Person, Engineer
{
    string sub;
    public:

    Teacher(string name, int age, string dept, string sub)
    {
        this->name = name;
        this->age = age;
        this->dept = dept;
        this->sub = sub;
    }

    void Teaching()
    {
        cout<<"I am teaching "<<sub<<endl;
    }
};


int main()
{
    Teacher A1("Pradum", 24, "ECE", "VLSI");
    A1.display();
    A1.Teaching();

return 0;
};