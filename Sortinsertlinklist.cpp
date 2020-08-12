#include<iostream>
using namespace std;


class node
{   public:
	node *next;
	int data;
};
class sll
{  public:
	node *head;
	sll()
	{
		head=NULL;
	}
	void insert();
	void display();
};
void sll::insert()
{
	int data;
	cout<<"Enter the data:";
	cin>>data;
	node*temp=new node;
	temp->next=NULL;
	temp->data=data;
	int count=0;
	if(head==NULL)
	{
		head=temp;
		count++;
	}
	else
	{
		node*p=head;
	   while(p->next!=NULL)
	   {
	   	p=p->next;
	   	count++;
	   }
	   p->next=temp;
	   count++;
	   node*q=head;
	   node*a=head->next;
	   for(int i=1;i<=count-1;i++)
	   {
	   	for(int j=i+1;j<=count;j++)
	   	{
	   	   	if(q->data>a->data)
	   	   	{
	   	   		int temp=q->data;
	   	   		q->data=a->data;
	   	   		a->data=temp;
		   }
		   if(q!=NULL && a!=NULL)
		   {
		   q=q->next;
		   a=a->next;}
		}
	   }
	}
	node*p=head;

}
void sll::display()
{
	node*p=head;
	while(p!=NULL)
	{
		cout<<p->data;
		p=p->next;
	}
}
int main()
{
	sll s;
	for(int i=0;i<4;i++)
	s.insert();
	s.display();
}
