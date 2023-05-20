//missing number
#include<bits/stdc++.h>
using namespace std;

int missing_number(int  array[], int n)
{
    int total;
    total = (n)*(n+1)/2;
    for(int i=0;i<n-1;i++)
      total -= array[i];

    return total;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n-1;i++)
     {
        cin>>a[i];
     }
    
    cout<<missing_number(a, n);
}