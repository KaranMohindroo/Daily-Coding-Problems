int maxMoney(int arr[],int i,int j,int n)
{
	if(j==i+1)
	{
		return dp[i][j]=max(arr[i],arr[j]);
	}
	if(i==j)
	return dp[i][j]=arr[i];
	if(dp[i][j]!=-1)
	return dp[i][j];
//	cout<<i<<" "<<j<<endl;
	int x1=maxMoney(arr,i+2,j,n);
	int x2=maxMoney(arr,i+1,j-1,n);
//	cout<<"\tx"<<x1<<" "<<x2<<endl;
	int x=arr[i]+min(x1,x2);
	int y1=maxMoney(arr,i+1,j-1,n);
	int y2=maxMoney(arr,i,j-2,n);
//	cout<<"\t"<<y1<<" "<<y2<<endl;
	int y=arr[j]+min(y1,y2);
	return dp[i][j]=max(x,y);	
}
