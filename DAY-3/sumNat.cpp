// Sum Of n natural number

#include<iostream>
using namespace std;

int sumNat(int num)
{
    if(num==0)
    return 0;

    return num + sumNat(num-1);
}
int main()
{
    int n;
    cout<<"Enter n\n";
    cin>>n;

    cout<<sumNat(n);
return 0;
};