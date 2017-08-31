#ifndef VIRTUALITY
#define VIRTUALITY

#include "Entity.h"
#include "Player.h"

namespace Virt
{

	void div(int num)
	{
		printf("\n|Test case %i|-----------------------------------\n", num);
	}
	void nl()
	{
		printf("\n");
	}
	 
	void RunTests()
	{
		div(1);
		Entity* e11 = new Player(); nl();

		div(2);

		e11->PrintName();
		

		div(3);

		delete e11;

	}
}



#endif // !VIRTUALITY
