#pragma once
#include<iostream>

using namespace std;

class List
{
private:
	int e;
	class List *prox;
	int size;
public:
	List();
	~List();
	void insertFirst(int e);
	void printList();
};

