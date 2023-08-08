#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x<=y)
	    cout<<z<<endl;
	    else if(x%y!=0)
	     cout<<((x/y)+1)*z<<endl;
	     else
	      cout<<(x/y)*z<<endl;
	}
	return 0;
}
