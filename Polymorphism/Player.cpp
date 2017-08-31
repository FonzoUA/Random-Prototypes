#include "Player.h"
#include <stdio.h>

#define Print_Player 1

Player::Player()
	: move_speed(10000)
{
#if Print_Player
	printf("Called Player Default Constructor\n");
#endif 
}

Player::Player(int move_speed_val)
	: move_speed(move_speed_val)
{
#if Print_Player
	printf("Called Player Specialized 1 Constructor\n");
#endif 
}

Player::Player(int move_speed_val, int hp_val, NameList player_name)
	: move_speed(move_speed_val)
{
#if Print_Player
	printf("Called Player Specialized 2 Constructor\n");
#endif 
	Entity::hp = hp_val;
	Entity::name = player_name;
}

Player::~Player()
{
#if Print_Player
	printf("Called Player Destructor\n");
#endif 
}

void Player::PrintName()
{
#if Print_Player
	printf("Called Player PrintName()\n");
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
	case NameList::Player1:
		printf("Entity name is Player1\n");
		break;
	case NameList::Player2:
		printf("Entity name is Player2\n");
		break;
	case NameList::Player3:
		printf("Entity name is Player3\n");
		break;
	default:
		printf("No name\n");
		break;
	}
}

void Player::PrintEntityName()
{
#if Print_Player
	printf("Called Player PrintEntityName() \n");
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
	case NameList::Player1:
		printf("This is is Player1\n");
		break;
	case NameList::Player2:
		printf("This is is Player2\n");
		break;
	case NameList::Player3:
		printf("This is is Player3\n");
		break;
	}
}

void Player::PrintAllValues()
{
#if Print_Player
	printf("Called Player PrintAllValues() \n");
#endif

	printf("[mov_speed: %im hp: %i]\n", move_speed, hp);
	PrintName();
}


void Player::SetHP(int val)
{
#if Print_Player
	printf("Called Player SetHP() \n");
#endif
	hp = val;
}