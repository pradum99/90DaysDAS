// Marge Sort 


#include<iostream>
#include<vector>

using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    vector<int>temp(end-start+1);
    int left = start, right = mid+1, index=0;

    while(left<=mid && right<=end)
    {
        if(arr[left] <= arr[right])
        {
            temp[index] = arr[left];
            index++,left++;
        }else
        {
            temp[index] = arr[right];
            index++,right++;
        }
    }
    // left arr not empty yet
    while (left<=mid)
    {
        temp[index] = arr[left];
        index++,left++;
    }
    
    //Right arr not empty yet
    while (right<=end)
    {
        temp[index] = arr[right];
        index++,right++;
    };
    
    // put elements in arr from temp
    index=0;
    while(start<=end)
    {
        arr[start] = temp[index];
        start++,index++;
    }

}
void mergeSort(int arr[], int start, int end)
{
    if(start==end)
    return;
    
    // mid 
    int mid = start + (end - start) / 2;


    // Left side
    mergeSort(arr, start, mid);

    //right side
    mergeSort(arr,mid+1, end);

    //sort
    merge(arr,start,mid, end);
}
int main()
{
    int arr[9] = {2, 9, 4, 3, 7, 8, 1, 66, 10};

    mergeSort(arr, 0, 9);
    for(int i=0; i<9; i++)
    cout<<arr[i]<<" ";
return 0;
};