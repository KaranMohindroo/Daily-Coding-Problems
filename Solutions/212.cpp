int alphabeticalEncoding(int n)
{
	//string s;
	vector<char>s;
	while(n>0)
	{
		if(n<=26)
		{
			s.push_back('A'+n-1);
			n=0;
			continue;
		}
		int a=n%26;
		n=n/26;
		s.push_back('A'+a-1);
	}
	s.push_back('\0');
	int len=s.size();
	reverse(s.begin(),s.end());
	for(int i=1;i<s.size();i++)
	cout<<s[i];
}
