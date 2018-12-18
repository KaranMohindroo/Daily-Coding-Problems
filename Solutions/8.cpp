
int cntUnivalTreesMain(Node * root)
{
	int cnt=0;
	cntUnivalTrees(root,cnt)
	return cnt;
	
}
int cntUnivalTrees(Node* root,int &cnt)
{
	static int cnt;
	if(!root)
	{
		return 1;
	}
	if(!root->left&&!root->right)
	{
		cnt++;
		return 1;
	}
	lef=cntUnivalTrees(root->left,cnt);
	righ=cntUnivalTrees(root->right,cnt);
	if(root->left&&root->right)
	{
		if(lef==righ&&lef==1&&root->data==root->left->data&&root->data==root->right->data)
		{
			cnt++;
			return 1;
		}
			return -1;
	}
	else if(root->left&&!root->right)
	{
		if(lef==righ&&lef==1&&root->data==root->left->data)
		{
			cnt++;
			return 1;
		}
			return -1;
	}
	else if(!root->left&&root->right)
	{
		if(lef==righ&&lef==1&&root->data==root->right->data)
		{
			cnt++;
			return 1;
		}
			return -1;
	}
	else
	{
		return -1;
	}
	
}
