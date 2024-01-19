// Target sum

#include<iostream>
using namespace std;

bool targetSum(int arr[],int index, int n, int T)
{
    if(T==0)
    return 1;

    if(index==n || T<0)
    return 0;

    return targetSum(arr,index+1,n, T) || targetSum(arr,index+1,n, T-arr[index]);
}

int main()
{
    int arr[] = {3, 6, 4, 7};
    int target = 12;
    cout<<targetSum(arr, 0, 4,target);
return 0;
};