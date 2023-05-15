// dutch national flag algorithm
// sort number of 0's , 1's ,2's 
#include<bits/stdc++.h>
using namespace std;

void first(int arr[], int n){
// first approach
    int count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
         count0+=1;
        else if(arr[i]==1)
         count1+=1;
        else
         count2+=1;
    }

    for(int i=0;i<count0;i++)
     cout<<"0"<<" ";
    for(int i=0;i<count1;i++)
     cout<<"1"<<" ";
    for(int i=0;i<count2;i++)
     cout<<"2"<<" ";
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    first(arr,n);
}