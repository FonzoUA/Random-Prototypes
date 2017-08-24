#include <stdio.h>
#include <iostream>

#include "Overloader.h"

#define TESTING_DLL 0

int main()
{
	
	printf("--------------Seg1----------------------\n");

	Overloader test1;
	Overloader test2(1);
	Overloader test3(4);
	Overloader* pTest4 = new Overloader(22);

	printf("--------------Seg2----------------------\n");

	printf("Test1: "); test1.PrintData();
	printf("Test2: "); test2.PrintData();
	printf("Test3: "); test3.PrintData();
	printf("pTest4: "); pTest4->PrintData();

	printf("--------------Seg3----------------------\n");

	printf("Pre-Increment test: \n");
	++test2;

	printf("Post-Increment test: \n");
	test3++;

	printf("Test2: "); test2.PrintData();
	printf("Test3: "); test3.PrintData();

	printf("--------------Seg4----------------------\n");

	printf("Class + const Test: \n");
	test1 + 12;
	printf("Class + Class Test: \n");
	test2 + test3;
	printf("Class += Class Test: \n");
	test3 += test1;
	printf("Const + Class Test: \n");
	*pTest4 = 100 + *(pTest4);

	printf("Test1: "); test1.PrintData();
	printf("Test2: "); test2.PrintData();
	printf("Test3: "); test3.PrintData();
	printf("pTest4: "); pTest4->PrintData();
	
	delete pTest4;

#if TESTING_DLL
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
#endif
	


	system("Pause");

}
