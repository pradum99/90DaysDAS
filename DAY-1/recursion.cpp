#include<iostream>
using namespace std;

void BirthDay5(int n)
{
    if(n==0)
    {
        cout<<"Happy Birth Day";
        return ;
    }
    cout<<n<<" days left for Birth Day\n";
    BirthDay5(n-1);
}
int main()
{
    int n=5;
    BirthDay5(5);
return 0;
};