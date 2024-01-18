// Print all subSequnce fo array

#include<iostream>
#include<vector>
using namespace std;

void subSequence(int arr[], int index, int n, vector<int> &temp, vector<vector<int>> &ans)
{
    if(index == n)
    {
        ans.push_back(temp);
        return;
    }

    // Exclude the current element and move to the next index
    subSequence(arr, index + 1, n, temp, ans);

    // Include the current element and move to the next index
    temp.push_back(arr[index]);
    subSequence(arr, index + 1, n, temp, ans);

    // Backtrack: Remove the last element to revert the state of 'temp'
    temp.pop_back();
}

int main()
{ 
    int arr[] = {1, 2, 3};
    vector<int> temp;
    vector<vector<int>> ans;

    subSequence(arr, 0, 3, temp, ans);

    for(int i = 0; i < ans.size(); i++)
    {
        for(int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
