#include<iostream>
using namespace std;
class Node()
{
	
	public:
	int data;
	Node *left;
	Node *right;
	Node(int n)
	{
		data=n;
		left=NULL;
		right=NULL;
	}
};
class Bst
{
	public:
	Node *root;
	Bst()
	{
		root=NULL;
	}
	void insert(int n)
	{
		inserthelper(root,n);
	}
	void inserthelper(Node *curr,int n)
	{
		if(root==NULL)
		{
			root=new Node(n);
		}
		else if(n<curr->data)
		{
			if(curr->left==NULL)
			{
				curr->left=new Node(n);
			}
			else
			{
				inserthelper(curr->left,n);
			}
		}
		elseif(n>curr->data)
		{
			if(curr->right==NULL)
			{
				curr->right=new Node(n);
			}
			else
			{
				inserthelper(curr->right,n);
			}
		}
	}		
	void display()
	{
		displayhelper(root);
	}
	void displayhelper(Node *curr)
	{
		if(curr==NULL)
		{
			return;
		}
		displayhelper(curr->left);
		cout<<curr->data+" ";
		displayhelper(curr->right);
	}	
	Node* search(int n)
	{
		return searchhelper(root,n);
	}
	Node* searchhelper(Node *curr,int n)
	{
		if(curr==NULL)
		{
			return curr;
		}
		else if(curr->data==n)
		{
			return curr;
			}
			else
			{
				if(n<curr->data)
				{
					searchhelper(curr->left,n);
				}
				else if(n>curr->data)
				{
					searchhelper(curr->right,n);
				}
			}
		}
	}
	void Fancy_Display()
	{
		Fancy_Display_Helper(root);
	}
	void Fancy_Display_Helper(Node* curr)
	{
	
			
