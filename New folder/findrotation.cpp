#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="abcde",  goal="cdeab";
    
    if(s.size()!=goal.size())
     return false;
    
    string s1 = s+s;

    if(s1.find(goal) !=string::npos)
     {
        cout<<"found";
     }
     else
     {
        cout<<"not found";
     }
    
      
    
}