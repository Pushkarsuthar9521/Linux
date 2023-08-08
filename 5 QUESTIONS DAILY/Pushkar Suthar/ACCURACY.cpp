#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    if(x==0 || x%3==0)
	     cout<<"0"<<endl;
	    else if((x+1)%3==0) 
	     cout<<"1"<<endl;
	     else
	      cout<<"2"<<endl;
	}
	return 0;
}
