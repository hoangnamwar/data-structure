#ifndef LIST_H
#define LIST_H
#include "node.h"

class List
{
private:
	Node* head;
public:
	List()
	{
		head = 0;
	}

	void add(int value)
	{
		Node* newNode = new Node;
		newNode->data = value;
		newNode->next = 0;

		if (head == 0)
		{
			head = newNode;
		}
		else
		{
			Node* shipper = head;
			while (shipper->next != 0)
			{
				shipper = shipper->next;
			}
			shipper->next = newNode;
		}

	}

	int get(int pos) const
	{
		Node* shipper = head;
		for (int i = 1; i < pos; i++)
		{
			shipper = shipper->next;
		}
		return shipper->data;
	}
};

#endif
