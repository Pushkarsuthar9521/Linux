// longest contiguous subarray
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int longestsubarray(ll a[],int n){
    ll maxsum=INT64_MIN;
    ll cursum=0;
    for(int i=0;i<n;i++)
    {
        cursum+= a[i];
        if(cursum > maxsum)
        {
            maxsum=cursum;
        }
        if(cursum<0)
        {
            cursum=0;
        }
    }
    return maxsum;
}

int main()
{
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<longestsubarray(a,n)<<endl;
}