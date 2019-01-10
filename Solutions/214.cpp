int longestConsecutiveRun(int n)
{
	int cnt=0,max=0;
	while(n>0)
	{
		int b=n%2;
		n=n/2;
		if(b==1)
		{
			cnt++;
		}
		if(b==0)
		{
			if(max<cnt)
			{
				max=cnt;
			}
		}
	}
	return max;
}
