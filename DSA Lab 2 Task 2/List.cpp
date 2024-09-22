#include "List.h"
#include "Node.h"

List::List()
{
	head == NULL;
}

void List::Insert_Begin(int id, string n)
{
	Node* temp = new Node;
	temp->Set_ID(id);
	temp->Set_Name(n);
	temp->Set_Next(NULL);
	if(head == NULL)
	{
		head = temp;
	}
	else
	{
		temp->Set_Next(head);
		head = temp;
	}
}

void List::Insert_End(int id, string n)
{
	Node* temp = new Node;
	temp->Set_ID(id);
	temp->Set_Name(n);
	temp->Set_Next(NULL);
	if (head == NULL)
	{
		head = temp;
	}
	else
	{
		Node* p = head;
		while (p->Get_Next() != NULL)
		{
			p = p->Get_Next();
		}
		p->Set_Next(temp);
	}
	
}

void List::Insert_After(int OldID, string OldN, int NewID, string NewN)
{
	Node* temp = new Node;
	temp->Set_ID(NewID);
	temp->Set_Name(NewN);
	temp->Set_Next(NULL);
	if (head == NULL)
	{
		head = temp;
	}
	else
	{
		Node* current = head;
		while (current->Get_Next() != NULL)
		{
			if (current->Get_ID() == OldID && current->Get_Name() == OldN)
			{
				temp->Set_Next(current->Get_Next());
				current->Set_Next(temp);
				return;
			}
			current = current->Get_Next();
		}
	}
}

void List::Delete(int id, string n)
{
	if (head == NULL)
	{
		cout << "List is empty!" << endl;
	}

	Node* p = head;
	Node* q = NULL;

	if (p->Get_ID() == id && p->Get_Name() == n)
	{
		head = p->Get_Next();
		delete p;
		return;
	}
	while (p != NULL && p->Get_ID() != id && p->Get_Name() != n)
	{
		q = p;
		p = p->Get_Next();
	}
	if (p == NULL)
	{
		cout << "Element not found!";
		return;
	}

	if (p->Get_Next() == NULL)
	{
		q->Get_Next() == NULL;
	}
	else
	{
		q->Set_Next(p->Get_Next());
	}
	delete p;
}

void List::Display()
{
	Node* p = head;
	p = head;
	if (head == NULL)
	{
		cout << "List is empty!" << endl;
		return;
	}
	cout << "List is: " << endl;
	while (p != NULL)
	{
		cout << p->Get_ID() << " " << p->Get_Name() << endl;
		p = p->Get_Next();
	}
}