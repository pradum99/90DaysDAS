// Print all subsequence of String

#include<iostream>
#include<vector>
using namespace std;

void subSequence(string s, int index, int n, string temp, vector<string> &ans)
{
    if(index == n)
    {
        ans.push_back(temp);
        return;
    }

    // Exclude 
    subSequence(s, index + 1, n, temp, ans);

    // Include 
    temp.push_back(s[index]);
    subSequence(s, index + 1, n, temp, ans);

    // Remove 
    temp.pop_back();
}

int main()
{ 
    string s = "abcd";
    vector<string> ans;
    string temp;

    subSequence(s, 0, s.size(), temp, ans);

    for(int i = 0; i < ans.size(); i++)
    cout<<ans[i]<<endl;

    return 0;
}
