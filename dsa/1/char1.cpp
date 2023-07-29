#include<bits/stdc++.h>
using namespace std;

// char logic()
// {

// }

int main()
{
    char str1[]="A quick brown fox jumps over the lazy dog";
    char *ptr;
    // char str2[]="";

    ptr = strtok(str1, " ");

    while(ptr){

        cout<<ptr<<"\t\t\t\t"<<strlen(ptr)<<endl;

        ptr=strtok(NULL, " ");
    }

    return 0;
}