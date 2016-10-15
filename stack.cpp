#include "stack.h"

Node::Node ()
{
	Node* next = NULL;
	data = 0;
}

Stack::Stack ()
{
	top = NULL;
}


void Stack::push (int data)
{
	//creating a temporary variable.
	Node* temp = NULL;

	temp = new Node();

	if (!temp)
	{
		cout << "error" << "\n";
	}
	else
	{
		temp->data = data;
		temp->next = top;
		top = temp;
	}

	//Sets the temporary variables data to the incomming data,
	//Sets the temp->next to the top of the stack,
	//Sets the top of the stack to temp.
	/*temp->data = data;
	temp->next = top;
	top = temp;*/

	return;
}

void Stack::pop (void)
{
	//If the stack is empty 'false' is printed.
	if (top == NULL)
	{
		cout << "false" << "\n";
	}

	//Sets temp to the top member of the stack,
	//Sets the new top member of the stack to the second member,
	//Deletes the temp variable.
	Node* temp = top;
	top = top->next;
	delete (temp);
	
	return;
}

void Stack::reverse (void)
{
	Node* pPrev = NULL; //Initializing the 3 nodes needed for reversal.
	Node* pCur  = top;
	Node* pNext = NULL;

	while (pCur != NULL)
	{
		pNext = pCur->next; //Sets Next to Cur->Next << needs to be done before the link is broken.
		pCur->next = pPrev; //Sets Cur->Next to pPrev, therefore pointing backwards.
		pPrev = pCur;		//Sets pPrev to pCur, now both pCur and pPrev are equal.
		pCur = pNext;		//Sets pCur to pNext, making pCur move up one node. At the end of the loop top is set to pPrev since it will be the last digit before the NULL.
	}

	top = pPrev; //Sets the final node to the head completing the reversal of the stack.

	return;
}

//Checks to see if the stack is empty, if it is empty 'true' is returned,
//if it is no empty 'false' is returned.
void Stack::isempty (void)
{
	if (top == NULL)
	{
		cout << "true" << "\n";
	}
	else if (top != NULL)
	{
		cout << "false" << "\n";
	}
}

void Stack::display (std::ostream& writer) const
{
	Node* temp = top;

	//While temps next pointer is not null,
	//print out the temp->data value and reassign temp to temp->next to parse through the stack.
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "\n";
	return;
}
