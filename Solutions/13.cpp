bool isValid(int count[], int k) 
{ 
    int val = 0; 
    for (int i=0; i<MAX_CHARS; i++) 
        if (count[i] > 0) 
            val++; 
            
    return (k >= val); 
} 
char* longest_string_with_k_distinct_characters(char* str,int k)
{
	int hash[10000]={0},cnt=0;
	int len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(hash[str[i]-'a']>0)			//counting distinct characters
		{
			cnt++;
		}
		hash[str[i]-'a']++;
	}
	if(cnt<k)
	return 0;
	for(i=0;i<len;i++)
	{
		hash[str[i]-'a']=0;
	}
	int win_start=0,win_end=1,win_start_rec,win_end_rec;
	int max_size=0;
	for(i=0;i<n;i++)
	{
			hash[str[i]-'a']++;
			while(!isValid(hash,k))
			{
				hash[str[win_start]-'a']--;
				win_start++;
			}
			if(win_end-win_start+1>max_size)
			{
				max_size=win_end-win_start+1;
				win_end_rec=win_end;
				win_start_rec=win_start;
			}
			
	}
	int k=0;
	for(i=win_start_rec;i<=win_end_rec;i++)
	s[k++]=str[i];
	
	return s;
}
