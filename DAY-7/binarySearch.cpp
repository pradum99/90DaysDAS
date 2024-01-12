// Binary Search using Recursion 

#include<iostream>
using namespace std;

bool binarySearch(int arr[], int start,int end, int key)
{
    if(start>end)
    return 0;
    
    int mid = end + (start - end);
    if(arr[mid]==key)
    return 1;
    else if(arr[mid]>key)
    return binarySearch(arr,start,mid-1,key);
    else
    return binarySearch(arr,mid+1,end,key);
}
int main()
{
    int arr[8] = {3, 5, 6, 7, 9, 12, 15, 99};
    int key = 150;

    cout<<binarySearch(arr,0,7,key);
return 0;
};