#include<iostream>
using namespace std;
class Node
{
	public:
	int data;
	Node *prev;
	Node *next;
	Node(int n)
	{
		data=n;
		next=NULL;
		prev=NULL;
	}
};
class Dll
{
	public:
	Node *head;
	Dll()
	{
		head=NULL;
	}
	void insert(int n)
	{
		Node *temp=new Node(n);
		if (head==NULL)
		{
			head=temp;
		}
		else
		{
			Node *curr=head;
			while(curr->next!=NULL)
			{
				curr=curr->next;
			}
			curr->next=temp;
			temp->prev=curr;
		}
	}
	void display()
	{
		Node *curr=head;
		while(curr!=NULL)
		{
			cout<<curr->data<<"<=>";
			curr=curr->next;
		}
	}
	void insertat(int n,int p)
	{
		Node *temp=new Node(n);
		if(p!=1)
		{
			Node *curr=head;
			int i=1;
			while(i<(n-1))
			{
				curr=curr->next;
				i++;
			}
			curr->next=temp;
			temp->prev=curr;
			curr=curr->next;
			curr->prev=temp;
			temp->next=curr;
		}
		else
		{
			Node *curr=head;
			
		}
	}
	void countitems()
	{
		Node *curr=head;
		int i=0;
		while(curr!=NULL)
		{
			curr=curr->next;
			i++;
		}
		cout<<"The number of items is"<<i;
	}
	void deleteat(int n)
	{
		Node *curr=head;
		int i=1;
		while(i<(n-1))
		{
			curr=curr->next;
			i++;
		}
		Node *te=curr->next->next;
		curr->next=te;
		te->prev=curr;
		
	}
	void dellast()
	{
		Node*curr=head;
		while(curr->next!=NULL)
		{
			curr=curr->next;
		}
		curr->next=NULL;
		curr->next->prev=NULL;
	}
};
int main()
{
	Dll obj;
	for(int i=1;i<5;i++)
	{
		obj.insert(i);
	}
	obj.display();
}					
						
				
						
										
