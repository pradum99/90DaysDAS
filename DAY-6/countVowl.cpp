// Count Vowl 

#include<iostream>
using namespace std;

int countVowl(string str, int index)
{
    if(index<0)
    return 0;

    if(str[index]=='a' || str[index]=='e' || str[index]=='i' || str[index]=='o' || str[index]=='u')
    return 1 + countVowl(str, index-1);
    else
    return countVowl(str, index-1);
}
int main()
{
    string str = "aiuoe";

    cout<<countVowl(str,5)<<endl;
return 0;
};