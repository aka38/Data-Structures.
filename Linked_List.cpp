#include <bits/stdc++.h>
using namespace std;

struct node {
	int data;
	node* next;
};

struct node* head;
void Insert ( int x, int pos)
{
	
	node* ele = new node();
	node* temp = new node();  // for iteration
	ele -> data = x;
	ele -> next = NULL;
	if(pos == 1)
	{
	       ele -> next = head;
	       head = ele ;
	    return ;
	}
	
	for(int i=0;i<pos-2;i++)
		temp = temp -> next;
	ele -> next = temp -> next;
	temp -> next = ele;
}
void Delete (int pos)
{
 
	 node* temp = head ;
	 if( pos == 1)
	 {
		 head = temp -> next;
		 delete temp;
		 return ;
	 }

	  node* temp1 = head;

	 for(int i=0;i< pos-2; i++)
	    temp = temp -> next;

	 temp1 = temp-> next; 
	 temp -> next =temp1 -> next;
	 delete temp1;

}

}
node* Reverse( node* head)
{
	 node *current , *prev, *next ;
	 current = head;
	 prev=NULL;
	 while(current!=NULL)
	 {
	 	next = current-> next;
	 	current -> next= prev;
	 	prev = current ;
	 	current = next ;
	 }
	 head = prev;
	 return head;
}
void Print()
{
	node* temp = head;
	cout<< "List is: ";
	while (temp != NULL)
	  {
	   cout<< temp -> data <<" ";
	   temp = temp -> next;
	  }
	 cout << "\n" ;
}
int main()
{
        Insert(1,1);
	Insert(2,1);
	Insert(3,1);
	Insert(4,1);
	Print();
        Delete(1);
	node* head1= NULL;
	head=Reverse(head);
	Print();

}
