char strGlobal[100000];
void encode(char * s)
{
	int len=strlen(s);
	char str[len];
	int  i,k=0,cnt=1;
	
	for(i=1;i<len;i++)
	{
		if(s[i]==s[i-1])
		{
			cnt++;
		//	cout<<cnt;
		}
		else
		{
			str[k++]=cnt+'0';
		//	cout<<str[k-1];
			
			str[k++]=s[i-1];
	//		cout<<s[i-1];
			cnt=1;
		}
	}
	str[k++]=cnt+'0';
//	cout<<str[k-1];		
	str[k++]=s[i-1];
//	cout<<s[i-1];
	str[k]='\0';
	cout<<str;
	strcpy(strGlobal,str);
	//return str;
}

void decode(char * s)
{
	int len=strlen(s);
	char str[len];
	int i,k=0,cnt,j;	 
	for(i=0;i<len;i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			cnt=s[i]-'0';
			for(j=0;j<cnt;j++)
			{
				str[k++]=s[i+1];
			}
		}
		
	}
	str[k]='\0';
	strcpy(strGlobal,str);
}
