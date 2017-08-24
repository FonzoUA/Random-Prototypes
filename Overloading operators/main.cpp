#include <stdio.h>
#include <iostream>

#include "Overloader.h"


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

	system("Pause");

}
