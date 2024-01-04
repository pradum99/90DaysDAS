// calculate Power 2

#include<iostream>
using namespace std;

int calPower(int num, int n)
{
    if(n==0)
    return 1;
    
    if(n==1)
    return 2;

    return 2 * calPower(num, n-1);
}
int main()
{
    int x,y;
    cout<<"Enter number x: \n";
    cin>>x;
    
    cout<<"Enter Power : \n";
    cin>>y;

    cout<<calPower(x,y);
return 0;
};