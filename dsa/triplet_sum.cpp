//TRIPLET SUM

#include<bits/stdc++.h>
using namespace std;

bool tripsum(int arr[], int n , int x)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=arr[j];
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        int l=i+1;
        int r=n-1;
        int sum=arr[i]+ arr[l]+arr[r];
        if(sum<x)
        {
            l++;
        }
        else if(sum>x)
        {
            r--;
        }
        else 
            return 1;
    }
    return 0;
}

int main()
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<tripsum(arr,n,x);
}