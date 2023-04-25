#include<iostream>
using namespace std;

// int partition(int *arr,int low, int high)
// {
//     int p=arr[low];
//     int i=low-1;
//     int j=high+1;
//     while(1)
//     {
//         do
//         {
//             i++;
//         }while(arr[i] < p);
//         do
//         {
//             j--;
//         }while(arr[j] > p);
//         if(i>=j)
//             return j;
//         swap(arr[i] , arr[j]);
//     }
// }

int partition(int *arr , int left , int right)
{
    int i=left-1;
    int j=right+1;
    int pivot=arr[left];

    while(true)
    {
        do
            i++;
        while(arr[i] < pivot);

        do
            j--;
        while(arr[j] > pivot);
        
        if(i >= j)
            return j;
        swap(arr[i] , arr[j]);
    }
}

// sorting algorithm
void qsort(int *arr,int low,int high)
{
    if(low < high)
    {
        int p=partition(arr,low,high);
        qsort(arr,low,p);
        qsort(arr,p+1,high);
    }
}


int main()
{
    int arr[]={2,5,1,7,9,12,11,10};
    cout<<partition(arr,0,7)<<endl;
    qsort(arr,0,8);
    for(int i=0; i<8; i++)
        cout<<arr[i]<<"  ";
    return 0;
}