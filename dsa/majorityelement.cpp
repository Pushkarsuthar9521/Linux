// majority elements
#include<bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n;j++)
        {
            if(arr[i]==arr[j])
                count++;
            if(count>n/2)
                return arr[i];
        }
        count=0;
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n;i++)
    {
        cin >> arr[i];
    }
    cout << majorityElement(arr, n);
}