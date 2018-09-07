int Solution::lis(const vector<int> &A) {
    int n=A.size();
    vector<int> v(n,1);
    int m=1;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(A[i]>A[j] && v[i]<v[j]+1)
            {
                v[i]=v[j]+1;
                if(v[i]>m) m=v[i];
            }
        }
    }
    return m;
}
