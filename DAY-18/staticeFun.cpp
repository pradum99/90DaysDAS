// Static Function - > It is access only static member 

#include<iostream>
using namespace std;

class Customer
{
    string name;
    int acc_num, balance;
    static int total_bal, total_cus;

    public:
    Customer(string name, int acc_num, int balance)
    {
        this->name = name;
        this->acc_num = acc_num;
        this->balance = balance;
        total_bal+=balance;
        total_cus++;
    }
    static void total_Cusbal()
    {
        cout<<"Total  Customer :"<<total_cus<<endl;
        cout<<"Total  Balance :"<<total_bal<<endl;
    }

    void display()
    {
        cout<<name<<" "<<acc_num<<" "<<balance<<endl;
    }

    void Deposit(int balance)
    {
        if(balance>0)
        {
            this->balance += balance;
            total_bal+=balance;
        }
    }
    void withdraw(int balance)
    {
        if(balance<=total_bal)
        {
            this->balance-=balance;
            total_bal-=balance;
        }
    }

};
int Customer::total_bal = 0;
int Customer::total_cus = 0;

int main()
{
    Customer A1("pradum", 123, 1000);
    Customer A2("pra123", 1003, 5000);
    A1.Deposit(1000);
    A1.display();
    A2.withdraw(800);
    A2.display();
    Customer::total_Cusbal();

return 0;
};