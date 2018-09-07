int Solution::minDistance(string A, string B) {
    int a=A.size();
    int b=B.size();
    int T[a+1][b+1];
    for(int i=0;i<=a;i++)
    {
        T[i][0]=i;
    }
    for(int j=0;j<=b;j++)
    {
        T[0][j]=j;
    }
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            if(A[i-1]==B[j-1])
            {
                T[i][j]=T[i-1][j-1];
            }
            else
            {
                T[i][j]=min(T[i-1][j-1],T[i-1][j]);
                T[i][j]=min(T[i][j],T[i][j-1]);
                T[i][j]=T[i][j]+1;
            }
        }
    }
    return T[a][b];
}
