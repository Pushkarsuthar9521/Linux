#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(z>=y)
	     cout<<x<<endl;
	    else
	    {
	        if(y%z==0)
	         cout<<x*(y/z)<<endl;
	        else
	         cout<<x*((y/z)+1)<<endl;
	    }
	    
	}
	return 0;
}
