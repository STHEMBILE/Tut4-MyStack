/*
My Stack Class Declaration
*/
#include <iostream>
#include <Windows.h>

using namespace std;

#ifndef MYSTACK_H
#define MYSTACK_H

class MyStack
{
private:

	/* Node Structure */
	struct node
	{
		int number;
		struct node *prev;
	}; struct node *tail = NULL, *curr;

public:

	/* Fuctions That Create And Extract Stacks Info. */
	void push(int);
	void pop();
	void peek();
	bool isEmpty();
	bool isFull(int);

};


#endif