#include "Node.h"

Node::Node(int data)
{
	Data = data;
	Next = nullptr;
}

Node::Node(int data, Node* next)
{
	Data = data;
	Next = next;
}

void Node::SetNext(Node* next)
{
	Next = next;
}