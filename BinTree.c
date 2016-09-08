typedef struct node{
	int value;
	struct node *left;
	struct node *right;
}Node;

void perOrder(Node *root)
{
	if(root != NULL)
	{
		printf("%d\n", root->value);
		perOrder(root->left);
		perOrder(root->right);
	}
}

void perOrder2(Node *root, Stack *s)
{
	Node *p = root;
	while(p != NULL || !s->empty())
	{
		while(p != NULL)
		{
			printf("%d\n", p->value);
			s.push(p);
			p = p->left;
		}
		
		if(!s->empty())
		{
			p = s.pop()
			p = p->right;
		}
	}
}

void inOrder(Node *root)
{
	if(root != NULL)
	{
		perOrder(root->left);
		printf("%d\n", root->value);
		perOrder(root->right);
	}
}

void inOrder2(Node *root, Stack *s)
{
	Node *p = root;
	while(p != NULL || !s.empty())
	{
		while(p != NULL)
		{
			s.push(p);
			p = p->left;
		}
		
		if( !s.empty())
		{
			p = s.pop()
			printf("%d\n", p->value);
			p = p->right;
		}
	}
}

void postOrder(Node *root)
{
	if(root != NULL)
	{
		perOrder(root->left);
		perOrder(root->right);
		printf("%d\n", root->value);
	}
}

void postOrder2(Node *root)
{
	Node *cur;
	Node *pre = NULL;
	s.push(root);
	while(!empty())
	{
		cur = s.top()
		if(cur->left == NULL && cur->right == NULL) || 
		(pre != NULL && (pre == cur->right || pre == cur->left)))
		{
			printf("%d\n", cur->value);
			s.pop();
			pre = cur;
		}
		else
		{
			if(cur->right != NULL)
				s.push(cur->right)
			if(cur->left != NULL)
				s.push(cur->left);
		}
	}
}
