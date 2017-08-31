#ifndef PLAYER
#define PLAYER

#include "Entity.h"


class Player : public Entity
{

	int move_speed;

public:
	Player();
	Player(int move_speed_val);
	Player(int move_speed_val, int hp_val, NameList player_name);
	
	~Player();
	//virtual ~Player();

	void PrintName();

	void PrintEntityName() override;
	
	void PrintAllValues();

	void SetHP(int val); //override;

};




#endif // !PLAYER
