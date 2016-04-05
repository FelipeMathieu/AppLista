#include"List.h"

void main()
{
	List *l = new List();
	int t, e;

	cout << "Informe o tamanho da lista: ";
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cout << "Informe o " << i + 1 << " elemento: ";
		cin >> e;
		l->insertFirst(e);
	}
	e = 0;

	l->printList();
}