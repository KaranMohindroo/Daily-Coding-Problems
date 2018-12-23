
int mini=INT_MAX;
int arr[2][2]={2, 4, 2, 5};
int min_cost(int n,int k,int i1,int i2,int cost){

	if(n==i1)			//all houses painted
	{					
			if(mini>cost)
				{
					mini=cost;
				}
				return 0;
	}
	
	int j;
		for(j=0;j<k;j++)
		{
			if(j==i2)	//no two adj house same color
			{
				
			}
			else
			{
				min_cost(n,k,i1+1,j,cost+arr[i1][j]);
			}
		}
		
	return 0;
}
