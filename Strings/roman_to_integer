int Solution::romanToInt(string A) {
    int prev;
    int count;
    unordered_map <char,int> m;
    m['I']=1;
    m['V']=5;
    m['X']=10;
    m['L']=50;
    m['C']=100;
    m['D']=500;
    m['M']=1000;
    count=m[A[0]];
    prev=count;
    for(int i=1;i<A.size();i++)
    {
        if(prev>=m[A[i]])
        {
            count+=m[A[i]];
            prev=m[A[i]];
        }
        else
        {
            count+=m[A[i]];
            count-=2*prev;
            prev=m[A[i]];
        }
    }
    return count;
}
