#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z=0;
	    cin>>x>>y;
	    if(x%y==0)
	    {
	        cout<<x/y<<endl;
	    }
	    else if(x<y)
	    {
	        cout<<x<<endl;
	    }
	    else
	    {
	        z=x/y;
	        cout<<z+(x%y)<<endl;
	    }
	}
	return 0;
}
