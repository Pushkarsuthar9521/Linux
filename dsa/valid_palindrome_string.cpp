#include<bits/stdc++.h>
using namespace std;

bool isvalid(char s)
{
        if((s>='a' && s<='z') || (s>='A' && s<='Z') || (s>='0' && s<='9') )
        {
            return 1;
        }
        else 
            return 0;
}

char tolowercase(char s)
{
    if((s>='a' && s<='z') || (s>='0' && s<='9'))
        return s;
    else{
        char temp = s - 'A' + 'a';
        return temp;
    }
}

bool checkpalindrome(string a)
{
    int s=0;
    int e=a.length()-1;
    while(s<=e)
    {
        if(a[s]!=a[e])
        {
            return 0;
        }
        else{

                s++;e--;
         }
    }
    return 1;
      

}

int main()
{

    string s;
    getline(cin,s);
    //remove faltu character
    string temp ="";
    for(int i=0;i<s.size();++i)
    {
        if(isvalid(s[i]))
            temp.push_back(s[i]);
    }

    // covert to lower case 

    for(int i=0;i<temp.size();i++)
    {
        temp[i]=tolowercase(temp[i]);
    }

    // check palindrome;
    return checkpalindrome(temp);
}