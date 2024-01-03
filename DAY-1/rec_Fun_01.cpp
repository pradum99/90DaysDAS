#include<iostream>
using namespace std;


void BirthDay0(int n)
{
    cout<<" Happy Birth Day";
}

void BirthDay1(int n)
{
    cout<<n<<" Days lest for Birth Day\n";
    BirthDay0(n-1);
}

void BirthDay2(int n)
{
    cout<<n<<" Days lest for Birth Day\n";
    BirthDay1(n-1);
}

void BirthDay3(int n)
{
    cout<<n<<" Days lest for Birth Day\n";
    BirthDay2(n-1);
}

void BirthDay4(int n)
{
    cout<<n<<" Days lest for Birth Day\n";
    BirthDay3(n-1);
}

void BirthDay5(int n)
{
    cout<<n<<" Days lest for Birth Day\n";
    BirthDay4(n-1);
}





int main()
{
    BirthDay5(5);

return 0;
};