// find sum from subset of arr

#include<iostream>
using namespace std;

int perfectSum(int arr[], int index, int n, int sum)
{
    if(index==n)
    return sum==0;

    return perfectSum(arr,index+1,n,sum) + perfectSum(arr,index+1,n,sum-arr[index]);
}
int main()
{
    int arr[] = {2, 5, 6,1,3};
    int sum = 8;
    cout<<perfectSum(arr, 0, 5, sum);
return 0;
};