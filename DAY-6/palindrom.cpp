// Check palindrom 

#include<iostream>
using namespace std;

bool checkPalindrom(string str, int start, int end)
{
    if(start >= end)
    return 1;

    if(str[start] != str[end])
    return 0;
    else
    return checkPalindrom(str, start+1, end-1);
}
int main()
{
    string str = "naman";

    cout<<checkPalindrom(str, 0, 4);
return 0;
};