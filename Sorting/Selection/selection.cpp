#include<iostream>
using namespace std;

// sort array
void sort(int *arr , int n)
{
    for(int i=0; i<n; i++)
    {
        int min=i;
        for(int j=i+1; j < n; j++)
        {
            if(arr[j] < arr[min])
            {
                min=j;
            }
        }
        swap(arr[i] , arr[min]);
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