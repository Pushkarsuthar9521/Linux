#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>b && a>c)
	      {
	         if(a>b+c)
	          cout<<"YES"<<endl;
	          else
	           cout<<"NO"<<endl;
	      }
	     else if(b>c)
	     {
	         if(b>a+c)
	          cout<<"YES"<<endl;
	          else
	           cout<<"NO"<<endl;
	     }
	     else{
	         if(c>b+a)
	          cout<<"YES"<<endl;
	          else
	           cout<<"NO"<<endl;
	     }
	}  
	return 0;
}