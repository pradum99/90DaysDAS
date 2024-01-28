// class - It is user define dataType - blueprint of the object

#include<iostream>
using namespace std;

class employee{
    private:
    string name;
    int salary;

    public:
    void setName(string n)
    {
        name = n;
    }
    void setSalary(int s)
    {
        salary = s;
    }


    void getName()
    {
        cout<<name<<endl;
    }
    void getSalary()
    {
        cout<<salary;
    }
};
int main()
{
    employee s1;
    s1.setName("Pradum");
    s1.setSalary(50000);

    s1.getName();
    s1.getSalary();
return 0;
};