// Print all subset of  Parentheses

#include<iostream>
#include<vector>
using namespace std;
void Parenthese(int n, int Left, int Right, string &temp, vector<string> &ans)
{
    // Base condition
    if(Left+Right == 2*n)
    {
        ans.push_back(temp);
        return;
    }
    //Left Parentheses
    if(Left<n)
    {
        temp.push_back('(');
        Parenthese(n, Left+1, Right, temp, ans);
        temp.pop_back();
    }
    //Right Parentheses
    if(Right<Left)
    {
        temp.push_back(')');
        Parenthese(n, Left, Right+1, temp, ans);
        temp.pop_back();
    }
}
int main()
{
    int n=3;
    vector<string>ans;
    string temp;

    Parenthese(n,0,0,temp,ans);
    for(int i=0; i<ans.size(); i++)
    cout<<ans[i]<<endl;

return 0;
};