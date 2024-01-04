// Sum of Square of N Number

#include<iostream>
using namespace std;

int sqSum(int num)
{
    if(num==1)
    return 1;

    return num*num + sqSum(num-1);
}
int main()
{
    int n;
    cout<<"Enter n\n";
    cin>>n;

    cout<<sqSum(n);
return 0;
};