int dp[100000]={-1};
int numberOfWays(int N)//int * steps,int size)
{
	if(dp[N]!=-1)
	return dp[N];
	if(N==0)
	{
		return 1;
	}
	if(N<0)
	{
		return 0;
	}
	return dp[N]=numberOfWays(N-1)+numberOfWays(N-2);
	/*
	for(i=0;i<size;i++)
	{
		dp[N]+=numberOfWays(N-steps[i]);
	}
	return dp[N];
	*/
}
