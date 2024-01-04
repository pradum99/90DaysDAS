// Calculate Factorial using Recursion 

#include<iostream>
using namespace std;

int Fact(int num)
{
    if(num==1|| num==0)
    return 1;

    return num * Fact(num-1);
}
int main()
{
    int n;
    cout<<"Enter n\n";
    cin>>n;

    if(0>n)
    cout<<"Factorial is not Posible";

    cout<<Fact(n);
return 0;
};