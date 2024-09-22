#include "Node.h"

Node::Node()
{
	ID = 0;
	name = " ";
	next = NULL;
}

void Node::Set_ID(int id)
{
	ID = id;
}

int Node::Get_ID() const
{
	return ID;
}

void Node::Set_Name(string n)
{
	name = n;
}

string Node::Get_Name() const
{
	return name;
}

void Node::Set_Next(Node* temp)
{
	next = temp;
}

Node* Node::Get_Next() const
{
	return next;
}