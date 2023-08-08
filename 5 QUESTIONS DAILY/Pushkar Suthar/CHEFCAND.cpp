#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,ans;
	    cin>>n>>x;
	    if(x>n)
	    cout<<"0"<<endl;
	    else
	    {
	        ans=n-x;
	        if(ans%4==0)
	         cout<<ans/4<<endl;
	        else
	          cout<<ans%4<<endl;
	           
	    }
	     
	}
	return 0;
}
