#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,k;
	    cin>>n>>m;
	    k=n/m;
	 
	    if(n%m==0)
	   {
	        if(k%2==0)
	       cout<<"YES"<<endl;
	       else
	       cout<<"NO"<<endl;
	   }
	   else 
	    cout<<"NO"<<endl;
	}
	return 0;
}
