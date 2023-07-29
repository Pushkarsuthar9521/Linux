//remove repeatitive words 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[]="the quick brown brwon fox brown";

    // cout<<str;

    char str2[]="";
    char *p=strtok(str," ");
    char *rpt;
    while(p)
    {
        // cout<<p<<endl;
        rpt = strstr(str,p);

        if(!rpt)
        {
            strcat(str2, p);
            strcat(str2," ");
        }
        p=strtok(NULL, " ");
    }
    cout<<str2<<endl;
    return 0;
}