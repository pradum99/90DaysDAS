// Find n th Fibonacci number 

#include<iostream>
using namespace std;

int Fib(int x)
{
    if(x<=1)
    return x;

    return Fib(x-1) + Fib(x-2);
}
int main()
{
    int n;
    cout<<"Enter Your Number n : ";
    cin>>n;

    cout<<Fib(n);
return 0;
};