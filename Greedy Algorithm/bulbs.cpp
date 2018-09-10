int Solution::bulbs(vector<int> &A) {
    int n=A.size();
    int count=0;
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]==0 && flag==0)
        {
            count++;
            flag=1;
        }
        else if(A[i]==1 && flag==1)
        {
            count++;
            flag=0;
        }
    }
    return count;
}
