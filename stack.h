#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
using std::ios;

//Node class
class Node
{
	friend class Stack;

public:
	Node ();

private:
	int data;
	Node* next;
};

//Stack class
class Stack
{
	friend class Node;

public:
	Stack ();
	void push    (int);
	void pop     (void);
	void reverse (void);
	void isempty (void);
	void display (std::ostream& writer) const;

private:
	Node *top;
};

//Prototype
void quit (void);
