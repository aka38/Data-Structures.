#include <bits/stdc++.h>
using namespace std;

struct node {
	int data;
	node* next;
};

struct node* head;
void insert( int x)
{
	node* temp =new node();
	temp -> data = x;
	temp -> next = NULL;
	if(head != NULL)
	{
		temp-> next = head;
	}
	head = temp;
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
