#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s1=0,s2=0,n;
    cout<<"enter the size of square matrix :";
    cin>>n;

    int mat[n][n];
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j){

                s1+=mat[i][j];
            }
            if(j==n-1-i){

                s2+=mat[i][j];
                // cout<<mat[i][j]<<" ";
            }
            cout<<endl;

            // cout<<mat[i][j]<<" ";

        }
        cout<<endl;
    }         
   
    cout<<"difference of diagonal elements is : "<<s1-s2;
    return 0;
}