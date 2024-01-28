// Distructor - It is relese dynamic allowcete memory. Actually , It is relese resources which open.

#include<iostream>
using namespace std;

class car
{
    string name;
    string color;
    int cost;

    public:
    car()
    {
        name = "TaTa NeNo";
        color = "White";
        cost = 1000000;
        cout<<"Name = "<<name<<endl<<"Color = "<<color<<endl<<"Cost = "<<cost<<endl;
    }
    car(string name)
    {
        this->name=name;
        cout<<"Constructor = "<<name<<endl;
    }
    ~car()
    {
        cout<<"Distructor = "<<name<<endl;
    }
};

int main()
{
    car Ta("T1");
    car Tb("T2");
    car Tc("T3");
    car Td("T4");

return 0;
};