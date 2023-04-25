#include<iostream>
using namespace std;

void merge(int *arr,int left, int mid, int right)
{   
    int n1=mid-left+1;
    int n2=right-mid;
    int l[n1];
    int r[n2];

    // copy element in temp array
    for(int i=0; i<n1; i++)
        l[i]=arr[left+i];
    for(int i=0; i<n1; i++)
        r[i]=arr[mid+1+i];

    int i=0;
    int j=0;
    int track=left;
    // arrange the array
    while(i < n1 and j < n2)
    {
        if(l[i] <= r[j])
            arr[track++]=l[i++];
        else
            arr[track++]=r[j++];
    }
    while(i<n1)
        arr[track++]=l[i++];
    while(j<n2)
        arr[track++]=r[j++];
    
}

void mergeSort(int *arr , int left , int right)
{
    if(left < right)
    {
        int mid = (left+right)/2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}

int main()
{
    int arr[]={1,2,5,8,3,7,15};
    mergeSort(arr,0,6);
    // print data
    for(int i=0; i<7; i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}

