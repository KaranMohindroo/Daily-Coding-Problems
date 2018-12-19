int* productArray(int *arr,int size)
{
	int left[100000]={0},right[100000]={0},i;
	left[0]=1;
	for(i=1;i<size;i++)
	{
		left[i]=left[i-1]*arr[i-1];				//left pre Compute
	}
	right[size-1]=1;
	for(i=size-2;i>=0;i--)
	{
		right[i]+=right[i+1]*arr[i+1];			//right pre Compute
	}
	for(i=0;i<size;i++)
	{
		arr[i]=left[i]*right[i];				//left*right 
	}
	return arr;
}
