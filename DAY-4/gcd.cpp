// Find GCD of 2 Number

#include<iostream>
using namespace std;

int GCD(int a, int b)
{
    if(b==0)
    return a;

    return GCD(b, a%b);
}
int main()
{
    int n1, n2;
    cout<<"Enter N1 & N2 : ";
    cin>>n1>>n2;

    cout<<GCD(n1,n2);
return 0;
};