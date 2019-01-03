int n,m;  //dimensions
int isSafe(int x,int y)
{
	if(x<0||y<0)
	return 0;
	if(x>=m||y>=n)
	return 0;
	return 1;
}
int minSteps(int start_x,int start_y,int end_x,int end_y,char arr[4][4])
{
	int dis[100][100];
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		dis[i][j]=INT_MAX;
	}
	queue<pair<int,int>>q;
	q.push(make_pair(start_x,start_y));
	dis[start_x][start_y]=0;
	while(!q.empty())
	{
		pair <int,int> temp;
		temp=q.front();
	//	cout<<temp.first<<" "<<temp.second;
		q.pop();
		if(isSafe(temp.first+1,temp.second)&&arr[temp.first+1][temp.second]=='f')
		{			
			if(dis[temp.first][temp.second]+1<dis[temp.first+1][temp.second])
			{
				dis[temp.first+1][temp.second]=dis[temp.first][temp.second]+1;
				q.push(make_pair(temp.first+1,temp.second));		
			}
		}
		if(isSafe(temp.first-1,temp.second)&&arr[temp.first+-1][temp.second]=='f')
		{			
			if(dis[temp.first][temp.second]+1<dis[temp.first-1][temp.second])
			{
				dis[temp.first-1][temp.second]=dis[temp.first][temp.second]+1;
				q.push(make_pair(temp.first-1,temp.second));		
			}
		}
		if(isSafe(temp.first,temp.second+1)&&arr[temp.first][temp.second+1]=='f')
		{			
			if(dis[temp.first][temp.second]+1<dis[temp.first][temp.second+1])
			{
				dis[temp.first][temp.second+1]=dis[temp.first][temp.second]+1;
				q.push(make_pair(temp.first,temp.second+1));		
			}
		}
		if(isSafe(temp.first,temp.second-1)&&arr[temp.first][temp.second-1]=='f')
		{			
			if(dis[temp.first][temp.second]+1<dis[temp.first][temp.second-1])
			{
				dis[temp.first][temp.second-1]=dis[temp.first][temp.second]+1;
				q.push(make_pair(temp.first,temp.second-1));		
			}
		}
	}
	if(dis[end_x][end_y]==INT_MAX)
	{
		return NULL;
	}
	else
	return dis[end_x][end_y];
}
