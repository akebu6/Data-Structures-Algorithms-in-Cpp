/***********************************************************************
* Program: A simple program using linked lists
* Author: Akebu
*************************************************************************/
#include <iostream>
using namespace std;

struct Node
{
	int info; //variable to store the values of type int
	Node *link; //a pointer
};

int main()
{
	Node* head = NULL; //creating the head and making it point to nothing
	head = new Node; //make head pointer point to a new node
	
	head->info = 12;
	head->link = NULL;
	
	Node* secondptr = new Node; // creating a new node to store the node info
	secondptr->info = 14;
	secondptr->link = NULL;
	head->link = secondptr;
	
	Node* firstptr = new Node; // creating a 3rd node to store the new node info
	firstptr->info = 1000;
	firstptr->link = NULL;
	head->link->link = firstptr;
	
	//outputting the values stored in the linked list
	cout << "First num is: " << head->info << endl;
	cout << "Second num is: " << head->link->info << endl;
	cout << "Third num is: " << secondptr->link->info << endl;
	
	return 0;
}