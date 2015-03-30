/*
Testing of Class MyStack
*/


#include <iostream>
#include <Windows.h>

#include "MyStack.h"

using namespace std;

int main()
{
	MyStack stack;
	int number, max;

	/* Getting a maximum number of values to be entered */
	cout << endl << " Max: ";
	cin >> max;

	/* Creating A Singly Linked List (i.e a Stack) */
	cout << endl << " Number(s):" << endl;

	while (max != 0)
	{
		cout << " ";
		cin >> number;
		stack.push(number);
		max--;
	}

	/* Popping Out The Stack */
	cout << endl << " --------------" << endl << " Popping" << endl;
	stack.pop();

	/* Checks If The Stack is Empty */
	if (stack.isEmpty() == true)
		cout << " --------------" << endl << " Stack Is Empty!" << endl;

	/* Checks If The Stack is Full */
	if (stack.isFull(max) == true)
		cout << " --------------" << endl << " Stack Is Full." << endl;
	cout << " --------------" << endl << endl;

	system("pause");
	return 0;
}