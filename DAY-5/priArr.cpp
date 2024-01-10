// Print Array using recursion

#include<iostream>
using namespace std;

void PrintArr(int arr[], int ind, int n)
{
    if(ind == n)
    return;

    PrintArr(arr,ind+1,n);   // for Reverse way
    cout<<arr[ind]<<endl;
    // PrintArr(arr,ind+1,n);
};

int main()
{
    int arr[5] = {2, 3, 5, 7, 9};

    PrintArr(arr, 0, 5);
return 0;
};