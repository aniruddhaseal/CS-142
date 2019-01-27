#include<iostream>
using namespace std;
class Node()
{
	public:
	int data;
	Node *next;
	Node(int n)
	{
		data=n;
		next=NULL;
	}
};
class Csll
{
	public:
	Node *head;
	Csll()
	{
		head=NULL;
	}
	void insert(int n)
	{
		Node *temp=new Node(n);
		if(head==NULL)
		{
			head=temp;
			temp->next=head;
		}
		else
		{
			Node *curr=head;
			while(curr->next!=head)
			{
				curr=curr->next;
			}
			curr->next=temp;
			temp->next=head;
		}
	}
	void display()
	{
		Node *curr=head;
		cout<<curr->data<<"->";
		curr=curr->next;
		while(curr!=head)
		{
			cout<<curr->data<<"->";
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
			temp->next=curr->next;
		}	
		else
		{
		}
	}
	void countitems()
	{
		Node *curr=head->next;
		int i=1;
		while(curr!=head)
		{
			curr=curr->next;
			i++;
		}
		cout<<"The number of items"<<i;
	}		
	void deleteat(int n)
	{
	}
	void dellast()
	{
		
		Node*curr=head;
		while(curr->next!=head)
		{
			curr=curr->next;
		}
		curr->next=head;
	}
};
int main()
{
	Csll obj;
	for(int i=1;i<5;i++)
	{
		obj.insert(i);
	}
	obj.display();
}	
