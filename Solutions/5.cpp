pair<int,int>cons(int a,int b)
{
	pair<int,int>p=make_pair(a,b);
	return p;
}
int car(pair<int,int>p)
{
	return p.first;
}
int cdr(pair<int,int>p)
{
	return p.second;
}
