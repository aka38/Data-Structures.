#include <bits/stdc++.h>
using namespace std;

struct node {
	int data;
	node* next;
};

struct node* head;
void insert( int x, int pos)
{
	
	node* ele = new node();
	node* temp = new node();  // for iteration
	ele -> data = x;
	ele -> next = NULL;
	if(n==1)
	{
	       temp -> next = head;
	       head = temp;
	}
	
	for(int i=0;i<pos-2;i++)
		temp = temp -> next;
	ele -> next = temp -> next;
	temp -> next = ele;
}
void print()
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
insert(1);
insert(2);
print();

}
