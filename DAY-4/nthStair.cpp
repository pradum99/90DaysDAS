// Find step of n th stair

#include<iostream>
using namespace std;

int TotalWay(int a)
{
    if(a<=1)
    return 1;

    return TotalWay(a-1) + TotalWay(a-2);
}
int main()
{
    int n;
    cout<<"Enter Your num : ";
    cin>>n;

    cout<<TotalWay(n);
return 0;
};