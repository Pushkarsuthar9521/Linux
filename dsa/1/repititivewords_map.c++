#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[]="the quick brown brown fox brown";
    map<string,int>mp;

    char *p = strtok(str," ");
    while(p)
    {
        mp[p]++;
        p=strtok(NULL," ");
    }

    for(auto x : mp)
    {
        cout<<x.first<< " : "<<x.second<<endl;
    }

    for(auto y:mp)
    {
        if(y.second==1)
         cout<<y.first<<" ";
    }
}