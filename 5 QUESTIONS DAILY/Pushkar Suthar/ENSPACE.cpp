#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,y;
	    cin>>n>>x>>y;
	    if(n<x+(y*2))
	     cout<<"NO"<<endl;
	    else 
	    cout<<"YES"<<endl;
	}
	return 0;
}
