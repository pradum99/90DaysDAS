// Reverce string

#include<iostream>
using namespace std;

void revStr(string &str, int first, int last)
{
    if(first >= last)
    return;

    char c = str[first];
    str[first] = str[last];
    str[last] = c;

    revStr(str, first+1, last - 1);
}
int main()
{
    string str = "pradum";

    revStr(str, 0, 5);
    cout<<str;
return 0;
};