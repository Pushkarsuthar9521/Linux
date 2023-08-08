#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,count=0,i,j;
	cin>>t;
	 for(int i=1;i<=t;i++)
	 {
	     for(int j=1;j<=t;j++)
	      { 
	          if(i+j==t)
	           count++;
	      }
	 }
	 
	 cout<<count;
	return 0;
}
