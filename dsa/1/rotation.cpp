#include<bits/stdc++.h>
using namespace std;

void rotation(char s[], char g[])
{
    char s1[]="";
    strcat(s1,s);
    strcat(s1,s);
    cout<<s1<<endl;

    if(strstr(s1,g)!=NULL)
        cout<<"true"<<endl;
    else 
        cout<<"false"<<endl;
    

}

int main()
{
    char s[100],g[100];
    cout<<"Enter string s:";
    cin>>s;
    cout<<"Enter goal string: ";
    cin>>g;

    rotation(s,g);
}