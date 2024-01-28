// Inheritance - The capability of a class derive property & charactaristic from another class.

#include<iostream>
using namespace std;

class  Human
{
    private:
    int a;
    protected:
    int b;
    public:
    int c;

    void putting()   // Every one can be access
    {
        a=11;
        b=20;
        c=12;
    }
};

int main()
{
    Human p;
    // p.a = 12;   Not access 
    // p.d = 12;   Not access
    p.c = 12;      // accessiable

return 0;
};