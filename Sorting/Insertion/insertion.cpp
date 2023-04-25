#include<iostream>
using namespace std;

// sort array
void sort(int *arr , int n)
{
    for(int i=1; i<n; i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(j>=0 and arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main()
{
    int arr[] = {5,4,3,1,2,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr , n);
    // print data;
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}