#include<bits/stdc++.h>
using namespace std;

bool anagram(string s, string g)
{
     if(s.length()!=g.length())
    {
        return false;
    }
    else{
        map<char,int>mp1;
        map<char,int>mp2;

        for(int i=0;i<s.length();i++)
        {
            mp1[i]++;
            mp2[i]++;
        }

        if(mp1==mp2)
            return true;
        else
            return false;

    }

}



int main()
{
    string s,g,p;
    cout<<"Enter a string to check anagram or not: ";
    getline(cin,s);
    getline(cin,g);
    
    bool A=anagram(s,g);
    if(A==true)
    {
        cout<<"Anagram"<<endl;
    }
    else{
        cout<<"Not anagram"<<endl;
    }

    return 0;
}