int nthSevenish(int n)
{
	int b[10],i=0;
	while(n>0)
	{
		b[i++]=n%2;
		n=n/2;
	}
	int sum=0;
	for(int j=i-1;j>=0;j--)
	{
		if(b[j]==1)
		{
			sum+=pow(7,j);
		}
	}
	return sum;
}
