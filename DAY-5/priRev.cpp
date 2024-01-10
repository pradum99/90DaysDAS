// Print Array using Recursion in  2 argument

#include<iostream>
using namespace std;

void PrintArr(int arr[], int ind)
{
    if(ind == -1)
    return;

    // PrintArr(arr,ind-1);   
    cout<<arr[ind]<<endl;
    PrintArr(arr,ind-1);  // for Reverse way
};
int main()
{
    int arr[5] = {2, 3, 5, 7, 9};

    PrintArr(arr,5);
return 0;
};