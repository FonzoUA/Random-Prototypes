#ifndef LINKEDLIST
#define LINKEDLIST


#include "LinkedList.h"
#include <stdio.h>




template <class T>
struct Node
{
	Node* next;
	Node* prev;
	T data;

	Node(T const &val)
		: next(nullptr)
		, prev(nullptr)
		, data(val)
	{}
};

template <class T>
class LinkedList
{
	Node<T>* head;
	Node<T>* tail;

public:
	
	/*
		Implementations need to be in the same file since
		compiler cannot instanciate a template unless the 
		entire implementation is visible at the point of instanciation
	*/

	LinkedList()
	{
		head = nullptr;
		tail = nullptr;
	}
	
	void AddToFront(const T &n)
	{
		Node<T>* newNode = new Node<T>(n);
		if (head == nullptr)
		{
			head = newNode;
			tail = newNode;
			return;
		}
		else
		{
			head->prev = newNode;
			newNode->next = head;
			head = newNode;
			return;
		}
	}
	
	Node<T>* GetNode(const T &n)
	{
		Node<T>* s = head;
		while (s != nullptr)
		{
			if (s->data == n)
				return s;
			s = s->next;
		}
		printf("Did not find the node\n");
		return nullptr;

	}

	void RemoveNode(const Node<T> *n)
	{
		if (n == nullptr)
		{
			printf("Tried to remove null\n");
			return;
		}
		if (n == head)
		{
			if (head == tail)
			{
				head = nullptr;
				tail = nullptr;
				return;
			}
			head = n->next;
			n->next->prev = nullptr;
			return;
		}
		else if (n == tail)
		{
			tail = n->prev;
			n->prev->next = nullptr;
			return;
		}
		else
		{
			n->prev->next = n->next;
			n->next->prev = n->prev; 
			return;
		}
	}

	void PrintList()
	{
		/* Not robust at all but useful for testing*/
		if (head != nullptr)
		{
			Node<T>* n = head;
			printf("-------------\n=head= \n");
			while (n != nullptr)
			{
				printf("[%s] \n", n->data);
				n = n->next;
			}
			printf("=tail=\n");
			printf("-------------\n");
		}
		else
		{
			printf("List is empty\n");
		}
	}
};



#endif // !LINKEDLISt
