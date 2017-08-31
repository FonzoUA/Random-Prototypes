#include "Entity.h"
#include <stdio.h>


#define Print_Entity 1

Entity::Entity()
	: x(11), 
	y(12), 
	hp(-1), 
	name(NameList::Tom)
{
#if Print_Entity
	printf("Called Entity Default Constructor\n");
#endif 
}

Entity::Entity(int x_val, int y_val, int hp_val, NameList char_name)
	: x(x_val),
	y(y_val),
	hp(hp_val),
	name(char_name)
{
#if Print_Entity
	printf("Called Entity Specialized Constructor\n");
#endif 
}

Entity::~Entity()
{
#if Print_Entity
	printf("Called Entity Destructor\n");
#endif 
}

void Entity::PrintName()
{
#if Print_Entity
	printf("Called Entity PrintName()\n");
#endif
	switch (name)
	{
	case NameList::Jack:
		printf("Entity name is Jack\n");
		break;
	case NameList::Dominique:
		printf("Entity name is Dominique\n");
		break;
	case NameList::Tom:
		printf("Entity name is Tom\n");
		break;
	default:
		printf("No name\n");
		break;
	}
}

void Entity::SetHP(int val)
{
#if abstractExists
	printf("Called Entity SetHP()\n");
#endif
	hp = val;
}

void Entity::PrintEntityName()
{
#if Print_Entity
	printf("Called Entity PrintEntityName() \n");
#endif
	switch (name)
	{
	case NameList::Jack:
		printf("This is Jack\n");
		break;
	case NameList::Dominique:
		printf("This is Dominique\n");
		break;
	case NameList::Tom:
		printf("This is is Tom\n");
		break;
	}
}

void Entity::PrintAllValues()
{
#if Print_Entity
	printf("Called Entity PrintAllValues() \n");
#endif

	printf("[x: %i, y: %i, hp:%i] \n", x, y, hp); 
	PrintName();
}
