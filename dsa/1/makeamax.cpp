#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
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
            freq[arr[i]%10]++;
            arr[i]/=10;
        }
    }

    for(int i=9;i>=0;i--)
    {
        while(freq[i]--)
        {
            cout<<i;
             
        }
    }     

    
}