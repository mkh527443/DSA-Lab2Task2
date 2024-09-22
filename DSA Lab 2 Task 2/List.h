#pragma once

#include"Node.h"
#include<iostream>
using namespace std;

class List
{
private:
	Node* head;

public:
	List();
	void Insert_Begin(int, string);
	void Insert_End(int, string);
	void Insert_After(int, string, int, string);
	void Delete(int, string);
	void Display();
	void search_by_id(int);
};