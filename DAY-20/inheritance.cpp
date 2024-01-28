#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    Human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void display()
    {
        cout<<name<<" "<<age<<endl;
    }
};

class Student : public Human
{
public:
    int roll, fee;

public:
    
    Student(string name, int age, int roll, int fee) : Human(name, age)
    {
        this->name = name;
        this->age = age;
        this->roll = roll;
        this->fee = fee;
    }

    // void display()
    // {
    //     cout << "name : " << name << " age : " << age << " roll : " << roll << " fee : " << fee << endl;
    // }
};

int main()
{
    
    Student A1("Pradum", 24, 11, 101);
    
    
    A1.display();

    return 0;
}
