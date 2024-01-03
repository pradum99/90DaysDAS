// Print Even Number from N

#include<iostream>
using namespace std;

void printEven(int num, int N)
{
    if(num>N)
    return;

    cout<<num<<endl;
    printEven(num+2, N);
}
int main()
{
    int n=21;

    if(n%2==1)
    n-=1;
    printEven(2, n);
return 0;
};