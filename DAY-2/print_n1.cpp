// Print 1 to N using Recursion    second method

#include<iostream>
using namespace std;

void print(int num)
{
    if(num==1)
    {
        cout<<num<<endl;
        return;
    }
    print(num-1);
    cout<<num<<endl;
}

int main()
{
    int num = 20;
    print(num);
return 0;
};