// Find maximum Element in array using recursion

#include<iostream>
using namespace std;

int minElem(int arr[], int ind, int n)
{
    if(ind == n-1)
    return arr[ind];

    return max(arr[ind], minElem(arr, ind+1, n));
}

int main()
{
    int arr[5] = {5, 3, 8, 1, 9};

    cout<<minElem(arr,0,5);
return 0;
};