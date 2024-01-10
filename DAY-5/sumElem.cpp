// Sum of element in array using recursion 

#include<iostream>
using namespace std;
int sumElem(int arr[], int ind)
{
    if(ind==-1)
    return 0;
    return arr[ind] + sumElem(arr, ind-1);
}
int main()
{
    int arr[5] = { 2, 4, 6, 8, 9};

    cout<<sumElem(arr,4);
return 0;
};