#include<bits/stdc++.h> 
using namespace std;

#define ltc ll t sc cin >> t sc while (t--)
#define itc int t sc cin >> t sc while (t--)
#define sc ;
#define ff first
#define ss second
#define mp make_pair
#define ll long long
#define dhawal ios::sync_with_stdio(false);
#define vijayvargiya cin>tie(NULL);
#define endl "\n"

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
         int n;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }

    if(n%2==0)
    {
        for(int i=0;i<n-1;i+=2)
        {
            int temp=s[i];
                 s[i]=s[i+1];
                 s[i+1]=temp;
        }    
    }
    else
    {
         for(int i=0;i<n-2;i+=2)
        {
            int temp=s[i];
                 s[i]=s[i+1];
                 s[i+1]=temp;
        }    
    }
    
    for(int i=0;i<n;i++)
     {
         int ne = int(s[i]);
          ne = 122-ne;
          s[i]=char(97 + ne);
          cout<<s[i];
     }
    
    cout<<endl;
 
  }
    return 0;
}