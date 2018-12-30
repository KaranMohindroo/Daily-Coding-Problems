
int min_rooms(int start[],int end[],int n)
{
	// all start before end require a seperate platform
	sort(start,start+n);
	sort(end,end+n);
	int k=0,cnt=0,max=0,i;
	for(i=0;i<n;i++)
	{
		if(start[i]<=end[k])
		{
			cnt++;
			if(max<cnt)
			max=cnt;
		}
		else
		{
			cnt--;
			k++;
		}
	}

	return max;
	
}
