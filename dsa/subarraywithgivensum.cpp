/// subarray with given sum
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int subarraysum(ll int a[], ll int s, ll int n)
{
    
    for(int i=1; i<=n; i++)
    {
        ll sum=a[i];
        for(int j=i+1; j<=n; j++)
        {
           sum+= a[j];
           if(sum==s)
           {
             cout<<a[i]<<" "<<a[j];
             break;
           }
           else if(sum>s)
                return -1;
        }
    }
    return 0;
}

int main()
{
    ll int n,s;
    cin>>n>>s;
    ll int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    subarraysum(a,n,s);

}

/*
vector<int> subarraySum(int arr[], int n, int s){
    int l = 0;
    int r = 0;
    int count = 0;
    vector<int> res;
    
    while (r<=n) {
        if (count == s) {
            res.push_back(l+1);
            res.push_back(r);
            return res;
        }
        if (l==r || count < s) {
            r++;
            count += arr[r-1];
        }
        else {
            l++;
            count -= arr[l-1];
        }
    }
    
    res.push_back(-1);
    return res;
}
*/

/*
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        vector<int> ans;
         int i=0;
         int j=0;
         int csum=0;
         
         if(s==0)
         {
             ans.push_back(-1);
             return ans;
         }
         
          while(j<n)
          {
              csum+=arr[j];
              if(csum<s)
              {
                  j++;
              }
             else if(csum>s)
              {  
                  while(csum>s){
                      csum=-arr[i];
                      i++;
                  }
                  if(csum==s)
                  {
                      ans.push_back(i+1);
                      ans.push_back(j+1);
                      return ans;
                  }
              }
              else
              {
                  ans.push_back(i+1);
                  ans.push_back(j+1);
                  return ans;
              }
          }    
         if(ans.size()==0)
              ans.push_back(-1); 
         return ans;     
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends*/
