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

    for (int i = 0; i < n - 2;i++)
    {
        int count=0;
        int s = x - arr[i];
       int  l = i+1;
       int r = n - 1;
       
       while(l<r)
       {
            count++;
            if (arr[l] + arr[r] == s)
            {
                cout << count << endl;
                cout << arr[l] + arr[r];
                return 1;
        }
        else if ((arr[l] + arr[r])<s)
                l++;
        else
                r--;
       }
 
    }

        // gives the faulse result
        // for(int i=0;i<n-2;i++)
        // {
        //     int l=i+1;
        //     int r=n-1;
        //     while(l<r){
        //         int x = x- arr[i];
        //         int sum=arr[i]+ arr[l]+arr[r];
        //         if(sum<x)
        //         {
        //             l++;
        //         }
        //         else if(sum>x)
        //         {
        //             r--;
        //         }
        //         else
        //             return 1;
        //     }
        // }
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
     // function call
    cout<<tripsum(arr,n,x);
}