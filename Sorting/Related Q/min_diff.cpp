#include<bits/stdc++.h>
using namespace std;

// find the minium difference in array
int min_diff(int *arr , int n)
{
    sort(arr,arr+n);
    int min=INT_MAX;
    
    for(int i=0; i<n-1; i++)
        if(min > (arr[i+1] -  arr[i]))
            min = arr[i+1] -  arr[i];

    return min;
}

int main()
{
    int arr[] = {1, 5, 3, 19, 18, 25};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<min_diff(arr , n)<<endl;
    return 0;
}