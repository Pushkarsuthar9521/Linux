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

// second approach using 3 pointer
void second(int arr[], int n){
    int left = 0;
    int mid = 0;
    int right = n-1;
    for (int i = 0; i < n;i++)
    {
        if(arr[mid] == 0)
        {
         swap(arr[left], arr[mid]);
         left++;
         mid++;
        }
        else if(arr[mid]==1)
        {
         mid++;
        }
        else
        {
         swap(arr[right], arr[mid]);
         right--;
        }
    }
    for (int i = 0; i < n;i++)
     {
        cout << arr[i] << " ";
     }
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
    cout << endl;
    second(arr, n);
}