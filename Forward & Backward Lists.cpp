/**************************************************************************************
* Program: inserting a new node using the forward & backward methods,                 *
* node to be inserted at rear. Not a full implementation, just a definition of the    *                                                        * 
* functions that will later be used in another program                                *
* Author: Akebu                                                                       *
* Date: 4th November, 2021                                                            *
**************************************************************************************/

#include <iostream>
using namespace std;

// struct that will be used to create the linked list
struct NodeType
{
	int info;
	NodeType *link;	
};

NodeType* forwardList()
{
	NodeType *first, *last, *newNode; // objects of NodeType type
	int num; // creating a vaviable that will be used to store the value entered by the user
	
	cout << "Enter a few whole numbers, ending with - 99: ";
	cin  >> num;
	
	// initialising first pointer to point to nothing
	first = nullptr;
	
	while(num != -99)
	{
		newNode = new NodeType; // allocating memory to newNode of type NodeType
		newNode->info = num; // store num in newNode's info memory space
		newNode->link = nullptr;
		
		// validation that the list is not empty
		if(first == nullptr)
		{
			first = newNode;
			last = newNode;
		} // end of if statement
		
		else
		{
			last->link = newNode;
			last = newNode;	
		} // end of else statement
		
		cin >> num;
	} // end of while loop
		
	return first;
} // end of forwardList()

NodeType* backwardList()
{
	NodeType *first, *newNode;
	first = nullptr;
	
	int num; // creating a vaviable that will be used to store the value entered by the user
	
	cout << "Enter a few whole numbers, ending with - 99: ";
	cin  >> num;
	
	while(num != -99)
	{
		newNode = new NodeType; // allocating memory to newNode of type NodeType
		newNode->info = num; // store num in newNode's info memory space
		newNode->link = first;
		first = newNode;
		
		cin >> num;
	} // end of while
	
	return first;
} // end of backwardList()
