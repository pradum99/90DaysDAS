#include<iostream>
#include<vector>
using namespace std;

int countWay(vector<int>&arr, int index, int sum)
{
    if (sum == 0)
        return 1;
    if (sum < 0 || index == arr.size())
        return 0;

    int ans = 0;
    for (int i = index; i < arr.size(); i++)
    {
        ans += countWay(arr, i, sum - arr[i]);
    }

    return ans;
}

int main()
{
    int arr[] = {1, 5, 6};
    vector<int> arrVector(arr, arr + sizeof(arr) / sizeof(arr[0]));
    int sum = 7;
    cout << countWay(arrVector, 0, sum);

    return 0;
}
