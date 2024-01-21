#include<iostream>
#include<vector>
using namespace std;

void permutation(vector<int>& arr, vector<vector<int>>& ans, int index)
{
    if (index == arr.size())
    {
        ans.push_back(arr);
        return;
    }

    for(int i = index; i < arr.size(); i++)
    {
        swap(arr[i], arr[index]);
        permutation(arr, ans, index + 1);
        swap(arr[index], arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3};
    vector<int> arrVector(arr, arr + sizeof(arr) / sizeof(arr[0]));
    vector<vector<int>> ans;
    permutation(arrVector, ans, 0);

    // Print the permutations
    for(int i = 0; i < ans.size(); i++)
    {
        for(int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }

    return 0;
}
