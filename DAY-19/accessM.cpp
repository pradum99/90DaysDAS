#include<iostream>
using namespace std;


class A
{
    string name;
    int salary;
};

class B : public A
{
    public:
    int age;
};
int main()
{
    B a;
    a.age = 12;
return 0;
};