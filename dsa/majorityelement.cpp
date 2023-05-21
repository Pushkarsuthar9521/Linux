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
            if(a[i]==a[j])
                count++;
            if(count>=n/2)
                return arr[i];
        }
        count=0;
    }
    return -1;
}