
char* serialize(Node*root,int i)
{
	static char str[100000];
	if(root->left==NULL&&root->right==NULL)
	{
		str[2*i+1]='-';
		str[2*i+2]='-';
	
	}
	if(root->left==NULL)
	{
		str[2*i+1]='-';
		return str;
	}
	if(root->right==NULL)
	{
		str[2*i+2]='-';
		return str;
	}
	str[2*i+1]=root->left;
	str[2*i+2]=root->right;
	serialize(root->left,2*i+1);
	serialize(root->right,2*i+2);
	return str;
}
char* deSerialize(char*str,int i)
{
	static int i;
	if(str[i]=='-')
	{
		return NULL;
	}
	else
	Node*root = newNode(str[i]);
	
	root->left = deSerialize(str,2*i+1);
	
	root->right = deSerialize(str,2*i+2);
	
	return root;
}
