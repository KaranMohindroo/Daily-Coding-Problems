
bool checkBalanced(char* str)
{
	stack<char>s;
	int i=0;
	int len=strlen(str);
	while(str[i])
	{
		if((s.top()=='{'&&str[i]=='}')||(s.top()=='['&&str[i]==']')||(s.top()=='('&&str[i]==')'))
		{
			s.pop();
		}
		else
		s.push(str[i]);
		i++;
	}
	if(s.empty())
	{
		return TRUE;	
	}
	else
	return FALSE;
}
