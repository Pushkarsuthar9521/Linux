vector<int> Solution::plusOne(vector<int> &A) {
    vector<int> v;
    int n=A.size();
    int num=A[n-1]+1;
    int carry=num/10;
    v.push_back(num%10);
    for(int i=n-2;i>=0;i--)
    {
        num=A[i]+carry;
        carry=num/10;
        v.push_back(num%10);
    }
    int i=n-1;
    if(carry !=0)
    {
    
            v.push_back(carry);
            i=n;
    }
    
    while(v[i]==0)
    {
        v.pop_back();
        i--;
    }
    
    reverse(v.begin(),v.end());
    return v;
}
