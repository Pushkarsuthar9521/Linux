// count inversion
#include<bits/stdc++.h>
using namespace std;


//brute force method
void bruteforce(int a[], int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
                count++;
        }
    }
    cout<<count++;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    bruteforce(a,n);

    return 0;
}