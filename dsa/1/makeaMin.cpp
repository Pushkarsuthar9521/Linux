#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,count=0;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter an "<<n<<"size of array : ";
    for(int i=0;i<n;i++)
      cin>>arr[i];
      
    int freq[10]={0};

    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        while(arr[i])
        {
            if(arr[i]%10==0)
            {
                count++;
            }
            freq[arr[i]%10]++;
            arr[i]/=10;

        }
    }

    // To make minimum number
    for(int i=1;i<=9;i++)
    {
        if(i==2)
        {
            cout<<count;
        }
        while(freq[i]--)
        {
            cout<<i;
        }
    }
}