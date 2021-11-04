/*************************************************************************************
* Author: Akebu
* Program: a simple program to demonstrate how stacks can be used
* Date: 11th September, 2021
**************************************************************************************/

#include <bits/stdc++.h>
using namespace std;

//function to create the stack, uses a stack as a parameter
void showStack (stack <int> s)
{
	while(!s.empty()) //validate if the stack is empty or not before proceeding
	{
		cout << s.top();
		s.pop();
	}
	cout << endl;
	
} // end of showStack

int main ()
{
	stack <int> s;
	s.push(2);
	s.push(6);
	cout << "The stacks contains: ";
	showStack(s);
	
	cout << "The top value is: " << s.top;
	s.pop();
	
	cout << "The remaining values in the stack are: ";
	showStack(s);
	
	cout << endl;
	
	return 0;
} // end of main