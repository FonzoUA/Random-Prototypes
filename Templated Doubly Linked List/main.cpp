#include <stdio.h>
#include <iostream>

#include "LinkedList.h"
int main()
{
	LinkedList<char*> list;

	char* test1 = "TestA";
	char* test2 = "TestB";
	char* test3 = "TestC";
	char* test4 = "TestD";

	printf("  Test: Empty list \n  -should say that the list is empty\n\n");
	list.PrintList();
	printf("\n");

	list.AddToFront(test4);
	list.AddToFront(test3);
	list.AddToFront(test2);
	list.AddToFront(test1);

	printf("  Test: AddToFront \n  -should print in order [1][2][3][4]\n\n");
	list.PrintList();
	printf("\n");

	list.RemoveNode(list.GetNode(test4));
	list.RemoveNode(list.GetNode(test1));
	list.RemoveNode(list.GetNode(test2));
	list.RemoveNode(list.GetNode(test3));


	printf("  Test: Remove Node \n  -should remove nodes in order\n\n");
	list.PrintList();
	printf("\n");

	system("Pause");

}
