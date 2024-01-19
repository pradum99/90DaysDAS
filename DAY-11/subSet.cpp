// Print Sum of subset 

#include<iostream>
#include<vector>
using namespace std;

void sumSet(int arr[], int ind, int n, int sum, vector<int> &ans)
{
    if(ind==n)
    {
        ans.push_back(sum);
        return;
    }

    // Exclude
    sumSet(arr, ind + 1, n, sum, ans);
    // Include
    sumSet(arr, ind + 1, n, sum + arr[ind], ans);
}

int main()
{ 
    int arr[] = {3, 4, 5, 8};
    vector<int> ans;
    int sum = 0;

    sumSet(arr, 0, 4, sum, ans);

    // Printing the results
    for (int num : ans) {
        cout << num << endl;
    }

    return 0;
}
