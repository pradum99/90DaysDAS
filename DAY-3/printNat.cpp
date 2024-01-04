// Print N natural Number

#include<iostream>
using namespace std;

void printNat(int num)
{
    if(num==0)
    return;
    
    printNat(num - 1);
    cout<<num<<endl;
}
int main()
{
    int n;
    cout<<"Enter n\n";
    cin>>n;

    printNat(n);
return 0;
};