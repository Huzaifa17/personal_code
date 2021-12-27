#include<bits/stdc++.h>
using namespace std;

class node
{
	public:
	int val;
	node *next;
};

class list2
{
	public:
	node *head;
	node *curr;
	list2()
	{
		head=0;
		curr=0;
	}
	void addnode(int val);
	void display();
};

void list2::addnode(int val)
{
	node *newnode=new node;
	newnode->val=val;
	if(head==0)
	{
		curr=newnode;
		head=curr;
		newnode->next=head;
		return ;
	}
	//list is not empty
	curr->next=newnode;
	curr=curr->next;
	curr->next=head;
	return ;
}

void list2::display()
{
	node *running=head;
	if(head==0)
	{
		cout<<"Empty list"<<endl;
		return ;
	}
	do
	{
		cout<<running->val<<" ";
		running=running->next;
	}
	while(running!=head);
	cout<<endl;
	return ;
}

int main()
{
	list2 onj;
	onj.display();
	onj.addnode(5);
	onj.display();
	onj.addnode(10);
	onj.display();
	onj.addnode(15);
	onj.addnode(20);
	onj.addnode(25);
	onj.addnode(30);
	onj.display();
	return 0;
}
