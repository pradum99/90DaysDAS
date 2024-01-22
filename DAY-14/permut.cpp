// Permutation   Thay have dublicate Number

#include <iostream>
#include <vector>
using namespace std;

void permut(vector<int> &arr, int index, vector<vector<int>> &ans)
{
    if(index== arr.size())
    {
        ans.push_back(arr);
        return;
    }
    vector<int> use(21, 0);

    for (int i = index; i < arr.size(); i++)
    {
        if (use[arr[i] + 10] == 0)
        {
            swap(arr[index], arr[i]);
            permut(arr, index + 1, ans);
            swap(arr[i], arr[index]);
            use[arr[i] + 10] = 1;
        }
    }
}

int main()
{
    int arr[] = {1, 1, 2};
    vector<int> arrVector(arr, arr + sizeof(arr) / sizeof(arr[0]));

    vector<vector<int>> ans;
    permut(arrVector, 0, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
    return 0;
}
