#pragma once
#include<iostream>
using namespace std;
class Node
{
private:
	int ID;
	string name;
	Node* next;

public:
	Node();
	void Set_ID(int);
	int Get_ID()const;
	void Set_Name(string);
	string Get_Name()const;
	void Set_Next(Node*);
	Node* Get_Next()const;
};

