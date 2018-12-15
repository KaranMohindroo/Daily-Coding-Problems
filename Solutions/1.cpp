int check_K_Sum_Pair(int *arr,int size,int k)
{
	int hash[100000]={0},i;
	for(i=0;i<size;i++)
	{
		hash[arr[i]]++;				//Hashing
	}
	for(i=0;i<size;i++)
	{
		if(hash[k-arr[i]]>0)		//check if k-current element exists in hash
		{
			return 1;
		}
	}
	return 0;
}
