#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a+b+c+d == n)
	    {
	         if(a>b && a>c && a>d)
	            cout<<a<<endl;
	         else if(b>c && b>d)
	             cout<<b<<endl;
	        else if(c>d)
	          cout<<c<<endl;
	         else
    	      cout<<d<<endl;
    	        
	    }
	    
	}
	return 0;
}
