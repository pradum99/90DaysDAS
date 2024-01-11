// Lower case to Upper case

#include<iostream>
using namespace std;

void toUpper(string &str, int index)
{
    if(index == -1)
    return;
    
    str[index] = 'A' + str[index] - 'a';

    toUpper(str, index-1);
}
int main()
{
    string str = "pradum";

    toUpper(str, 5);
    cout<<str;
return 0;
};