// Print Even number from N using Recursion

#include<iostream>
using namespace std;

void printEven(int N)
{
    if(N<=1)
    return;

    printEven(N-2);
    cout<<N<<endl;
}
int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;

    if(n%2==1)
    n-=1;

    printEven(n);
return 0;
};