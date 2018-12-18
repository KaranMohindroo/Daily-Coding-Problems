int largestNonContigousSum(int *arr,int size)
{
	int i;
	int dp[size]={0};		// store sum till i
	dp[0]=arr[0];
	dp[1]=max(arr[0],arr[1]);
	for(i=2;i<size;i++)
	{
		dp[i]=max(arr[i]+dp[i-2],dp[i-1]);	
	}
	return dp[size-1];
}
