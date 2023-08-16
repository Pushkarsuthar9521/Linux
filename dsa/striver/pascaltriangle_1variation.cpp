#include<bits/stdc++.h>
using namespace std;

//Find the value of NCR
int nCr(int n,int r){
    int res=1;
    for(int i=0;i<r;i++)
    {
        res=res*(n-i);
        res=res/(i+1);
    }

    return (int)(res);
}

int main()
{
    int n,c,r;
    cout<< "Enter the value of N and R :";
    // cin>>n>>r;
    cin>>n;
    // nCr(n,r);
    // cout<<nCr(n,r)<<endl;
    vector<vector<int>>v;
    

    // for(int i=1;i<=n;i++)
    // {
    //     vector<int>temp;
    //     for(int j=1;j<=i;J ++)
    //     {
    //         temp.push_back(nCr(i-1,j-1));
    //     }
        
    //     v.push_back(temp);
    // }


     vector<vector<int>> ans;

    //Store the entire pascal's triangle:
    for (int row = 1; row <= n; row++) {
        vector<int> tempLst; // temporary list
        for (int col = 1; col <= row; col++) {
            tempLst.push_back(nCr(row - 1, col - 1));
        }
        ans.push_back(tempLst);
    }

    
    for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n";
    }

    return 0;
}