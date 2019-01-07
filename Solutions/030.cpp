int trappedRainWater(int a[],int n)
{
	int i,left_max[n],right_max[n];
	left_max[0]=0;
	for(i=1;i<n;i++)
	{
		left_max[i]=max(left_max[i-1],a[i-1]);
	}
	right_max[n-1]=0;
	for(i=n-2;i>=0;i--)
	{
		right_max[i]=max(right_max[i+1],a[i+1]);
	}
	int cnt=0;
	for(i=1;i<n-1;i++)
	{
		int x=min(left_max[i],right_max[i])-a[i];
		if(x>0)
		cnt+=x;
	}
	cout<<cnt;
	return cnt;
}
