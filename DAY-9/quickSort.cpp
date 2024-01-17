// QuichSort 

#include<iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pos = start;
    for(int i=start; i<=end; i++)
    {
        if(arr[i]<=arr[end])
        {
            swap(arr[i],arr[pos]);
            pos++;
        }
    }
    return pos -1;
};

void quickSort(int arr[], int start, int end)
{
    if(start>=end)
    return;


    int pivot = partition(arr,start,end);
    quickSort(arr,start, pivot-1);
    quickSort(arr,pivot+1,end);
}


int main()
{
    int arr[] = {2, 3, 5, 2, 4, 9, 7, 21, 46, 71, 22};
    quickSort(arr,0,10);

    for(int i=0; i<11; i++)
    cout<<arr[i]<<" ";

return 0;
};