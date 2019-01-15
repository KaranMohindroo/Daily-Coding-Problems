int dp[1000][1000]={-1};  //clear it everytime.
int editDistance(char *s,char*s1,int n,int m)
{
    if(n==0)return dp[n][m]=m;
    if(m==0)return dp[n][m]=n;
    if(dp[n][m]!=-1)
    return dp[n][m];
    if(s[n-1]==s1[m-1])
    {
        return dp[n][m]=editDistance(s,s1,n-1,m-1);
    }
    return dp[n][m]=1+ min(editDistance(s,s1,n-1,m-1),min(editDistance(s,s1,n-1,m),editDistance(s,s1,n,m-1)));
}
