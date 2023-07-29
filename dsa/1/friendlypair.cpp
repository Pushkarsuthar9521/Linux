#include<bits/stdc++.h>
using namespace std;
int main()
{
     int x, y,s1=0,s2=0;
     cin>>x>>y;

     for(int i=1;i<x;i++)
    {
        if(x%i==0){
            s1+=i;
            cout<<i<<"  ";
        }
           
    }
    cout<<endl;
    cout<<s1<<endl;

    for(int i=1;i<y;i++)
    {
        if(y%i==0){
            s2+=i;
            cout<<i<<" ";
        }
    }
    cout<<endl;
    cout<<s2<<endl;
    
    if((s1/x) == (s2/y))
     cout<<"Friendly Pair";

    else
     cout<<"Not Friendly Pair";

}