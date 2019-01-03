void removeKthLast(Node * head,int k)
{
	int cnt=0;
	Node* temp=head;
	while(cnt!=k)
	{
		temp=temp->next;
		cnt++;
	}
	while(temp->next)
	{
		temp=temp->next;
		head=head->next;
	}
	head->next=head->next->next;
}
