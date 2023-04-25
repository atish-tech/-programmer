#include<iostream>
using namespace std;

// int partition(int *arr,int left, int right)
// {
//     int temp=left-1;
//     int pivot=arr[right];
//     for(int i=left; i<right; i++)
//     {
//         if(arr[i] <= pivot)
//         {
//             swap(arr[++temp] , arr[i]);
//         }
//     }
//     swap(arr[++temp] , arr[right]);
//     return temp;
// }

// revise
int partition(int *arr , int left , int right)
{
    int pivot = arr[right];
    int track=left-1;
    
    for(int i=left; i<right; i++)
        if(arr[i] < pivot)
            swap(arr[++track] , arr[i]);
    swap(arr[++track] , arr[right]);
    return track;
}


// sorting algorithm
void qsort(int *arr,int left,int right)
{
    if(left < right)
    {
        int p=partition(arr,left,right);
        qsort(arr,left,p-1);
        qsort(arr,p+1,right);
    }
}

int main()
{
    int arr[]={10,80,30,90,40,50,70,1,44,5,64};
    qsort(arr,0,10);
    // cout<<partition(arr,0,10)<<endl;


    for(int i=0; i<11; i++)
        cout<<arr[i]<<"  ";
    return 0;
}