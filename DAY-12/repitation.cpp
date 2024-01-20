// target sum of repitation 

#include<iostream>
using namespace std;

int targetSum(int arr[], int index, int n, int target)
{
    if(target==0)
    return 1;
    if(index==n || target<0)
    return 0;

    return targetSum(arr,index+1,n,target) + targetSum(arr, index, n, target-arr[index]);
}
int main()
{ 
    int arr[] = {2,3,4,1};
    int target = 6;
    cout<<targetSum(arr,0,4,target);

return 0;
};