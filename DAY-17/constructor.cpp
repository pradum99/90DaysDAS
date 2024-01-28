// Constroctur - It is a special function where same name as class. When we difine any object it is auomatic invoce and call itself 
// they don't have return type 

// this keyword - It is a pointer which is store address. It is basically use when same name use like name = name
// that time refer to object that time we use this

#include<iostream>
using namespace std;

class customer
{
    string name;
    int acc_num;
    int salary;

    public:
    // customer()
    // {
    //     cout<<"I am a constructor"<<endl;
    // }
    customer()
    {
        name = "Pradum";
        acc_num = 11111;
        salary = 50000;
    }

    customer(string name, int acc_num, int salary)
    {
        this->name = name;
        this->acc_num = acc_num;
        this->salary = salary;
    }
    void display()
    {
        cout<<"name = "<<name<<endl<<"Account Number = "<<acc_num<<endl<<"salary = "<<salary<<endl;
    }
};
int main()
{
    customer s1;
    s1.display();
    customer s2("Pradum", 3232, 10000000);
    s2.display();

return 0;
};