#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y1,y2,y3;
	    cin>>x>>y1>>y2>>y3;
	    if(x+y1<=y2+y3)
	     cout<<x+y1<<endl;
	    else
	     cout<<y2+y3<<endl;
	    
	}
	return 0;
}
