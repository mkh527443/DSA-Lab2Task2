#include"Node.h"
#include"List.h"

void List::search_by_id(int id) {
	

	Node* p = head;
	if (p->Get_ID() == id)
	{
		head = p->Get_Next();
		cout << p->Get_ID() << " " << p->Get_Name() << endl;
	}
}

int main()
{
	List li;
	li.Insert_Begin(1, "Kashif");
	li.Insert_End(2, "Haris");
	li.Insert_After(1, "Kashif", 3, "Zunairah");
	li.Insert_Begin(4, "Ali");
	li.Insert_End(5, "Umer");
	li.Display();
	li.Delete(2, "Haris");
	cout << "List after deletion." << endl;
	li.Display();

	int ask_ID;
	cout << endl << "Enter ID: ";
	cin >> ask_ID;
	li.search_by_id(ask_ID);
}