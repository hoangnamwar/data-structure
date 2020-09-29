#ifndef LIST_H
#define LIST_H
#include "Node.h"
using namespace std;

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
		Node *newNode = new Node;
		newNode -> data = value;
		newNode -> next = 0;
		if (head == 0)
		{
			head = newNode;
		}
		else
		{
			Node* shipper;
			shipper = head;
			while (shipper->next != 0)
			{
				shipper = shipper->next;
			}
			shipper-> next = newNode;
		}
	}
	int get(int post) const
	{
		Node* shipper = head;
		for (int i = 1; i < post; i++)
		{
			shipper = shipper->next;
		}
		return shipper->data;
	}
	int count() const
	{
		Node* shipper = head;
		int count = 0;
		while (shipper != 0)
		{
			count++;
			shipper = shipper->next;
		}
		return count;
	}
	void insert(int value, int post) const
	{
		Node* shipper = new Node;
		Node* packer = new Node;
		Node* shipper1 = new Node;

		packer->data = value;
		packer->next = 0;
		Node* change = new Node;

		if (post == 1)
		{
			change -> data = head -> data;
			change->next = head->next;
			head->data = packer->data;
			head->next = change;
		}
		else
		{
			shipper->data = head->data;
			shipper->next = head->next;
			for (int i = 1; i < post - 1; i++)
			{
				shipper = shipper->next;
			}
			shipper1 = shipper->next;
			shipper->next = packer;
			packer->next = shipper1;
		}
	}
	void showUpAll()
	{
		Node* shipper = head;
		int i = 1;
		while (shipper != 0)
		{
			cout << i << "." << " " << shipper -> data << endl;
			i++;
			shipper = shipper->next;
		}
	}
	void deleteElment(int post)
	{
		Node* shipper = head;
		Node* shipper1 = new Node;
		for (int i = 1; i < post - 1; i++)
		{
			shipper = shipper->next;
		}
		shipper1 = shipper->next;
		shipper1 = shipper1->next;
		shipper->next = shipper1;
	}
};

#endif // !LIST_H
