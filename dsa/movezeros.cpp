// move zeros


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int loc;
    
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
    }

      loc=0;
    for(int i=0;i<n;i++)
    {
        
        if(a[i]!=0)
         {
            swap(a[loc],a[i]);
            loc++;
         } 
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

