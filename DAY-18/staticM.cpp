// Static - They are attribute of class and class member which is declaed using statice keyword. Only one copy create 
// for the antire class and share by all objet

#include<iostream>
using namespace std;

class Customer{
    string name;
    int acc_num, balance;
    static int total_cus;
    public:

    Customer(string name, int acc_num, int balance)
    {
        this->name = name;
        this->acc_num = acc_num;
        this->balance = balance;
        total_cus++;
    }

    void Display()
    {
        cout<<name<<" "<<acc_num<<" "<<balance<<" "<<total_cus<<endl;
    }
};

int Customer :: total_cus = 0;

int main()
{
    Customer A1("Pradum", 133, 1000);
    A1.Display();
    Customer A2("Pradum11", 188, 10055);
    A2.Display();
    Customer A3("Pradum11", 188, 10055);
    A3.Display();
return 0;
};