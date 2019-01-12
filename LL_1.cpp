#include<iostream>
using namespace std;
class Node{      //circle
	public:
	int data;//data
	Node * next;//pointer to next Node
	//constructor that make ptr NULL
	Node(){
		ptr=NULL;
	}
};
class LL{
	//Head+Circle inside linked 
	public:
	Node *head;//Head->Circle type ptr
	Node *tail;//points to last element
	LL(){  //Constructor
		head=NULL;
		tail=NULL;
	}
	//Rules of linking them
	//Insert the last element
	void Insert(int n){
		Node *t=new Node;//1st Node
		t->data=n;
		tail=temp;
		if(head==NULL){	//1st Node
			head=temp;
		else{	//Any Node
			tail->next=temp;
		}
	}
	void insertAt(int pos,int value)//Insert at a position
	{
		if(i==1)//at position 1
		{
			head->value=val;
			
		}
		else  //at other positions
		{
			Node *curr=head;
			int i=1;
			while(i<pos-1)
			{
				curr=curr->next;
				i++;
			}
			Node *temp=new Node;
			temp->value=val;
			temp->next=curr->next;
			current->next=temp;
		}
	}	
		
			
	//Deletion of Last Element
	void DelLast()
	{
		//store tail in temp
		Node *temp=tail;
		//before tail has to point to null
		Node *current=head;
		while(current->next!=tail){
			current=current->next;
		}
		current->next=NULL;
		//update tail
		tail=current;
		//delete temp
		delete temp;
	//Display
	void Display()
	{
		Node *temp=head;
		while(temp!=NULL)
		{
			cout<<temp->data<<"->"<<endl;
			temp=temp->next;
		}
	}	
	
};
int main()
{
	LL l1;
	l1.insert(1);
	l1.display();
	return 0;
}	
