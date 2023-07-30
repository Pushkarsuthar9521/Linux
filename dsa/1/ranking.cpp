#include<bits/stdc++.h>
using namespace std;
int main(){

    string s="tata ford toyota";
    stringstream is(s);
    vector<int>v;

    while(is>>s)
    {
        int rank=0;
        if(s=="ford")
            rank=1;
        else if(s=="toyota"){
            rank=2;
        }
        else if(s=="tata"){
            rank=3;
        }
        v.push_back(rank);
        cout<<rank <<" ";
    }

    int totalrank=0, n=v.size();

    for(int i=1;i<=n;i++){
        totalrank+=v[i-1]*(pow(3,3-i));
    }
    cout<<endl;
    cout<<"Total rank : "<<totalrank;

}