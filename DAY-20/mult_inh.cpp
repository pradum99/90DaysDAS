// Multilevel Inheritance 

#include<iostream>
using namespace std;

class Person
{
    protected:
    string name;
    int age;

    public:
    void Introduce()
    {
        cout<<"Hello I am "<<name<<" my age is : "<<age<<endl;
    }
};

class employee : public Person
{
    protected:
    int salary;

    public:
    void Mounthly_salary()
    {
        cout<<"My monthly salary : "<<salary<<endl;
    }
};

class Maneger : public employee
{
    protected:
    string dept;

    public:
    Maneger(string name, int age, int salary, string dept)
    {
        this->name = name;
        this->age = age;
        this->salary= salary;
        this->dept = dept;
    }
    void tell_Dept()
    {
        cout<<"I am working in "<<dept<<endl;
    }
};


int main()
{
    Maneger A1("Pradum", 20, 1000,"Finance");
    A1.tell_Dept();
    A1.Mounthly_salary();
    A1.Introduce();

return 0;
};