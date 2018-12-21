// Data Structure to be used is circular array
#define N 5			//Size of buffer
int order[N];
int front=0;
bool record(int order_id)
{
	order[front]=order_id;
	front=(front+1)%N;
}
int get_last(int i)
{
		return order[(N+front-i)%N];
}
