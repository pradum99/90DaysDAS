// Linear Search Using Recursion 

#include<iostream>
using namespace std;

bool linearSearch(int arr[], int index, int key)
{
    if(index<0)
    return 0;

    if(arr[index] == key)
    return 1;
    else
    linearSearch(arr, index-1, key);
}
int main()
{
    int arr[8] = {2, 3, 5, 7, 9, 13, 25, 66};
    int key = 132;

    cout<<linearSearch(arr,7,key);
return 0;
};