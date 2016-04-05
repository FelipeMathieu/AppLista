#include "List.h"

List::~List()
{
}
List::List()
{
	this->prox = NULL;
	this->e = NULL;
}
void List::insertFirst(int e)
{
	List *aux = new List();
	List *ant = this->prox;

	aux->e = e;
	this->prox = aux;
	aux->prox = ant;
	size++;
}

void List::printList()
{
	List *aux = this->prox;
	cout << "LISTA:" << endl;
	while (aux != NULL)
	{
		cout << aux->e << " |";
		aux = aux->prox;
	}
	cout << endl;
}