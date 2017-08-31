#ifndef ENTITY
#define ENTITY

#define abstractExist 0

enum NameList
{
	Jack,
	Tom,
	Dominique,
	Player1,
	Player2,
	Player3
};


class Entity
{
	int x;
	int y;
protected:
	NameList name;
	int hp;

public:
	Entity();
	Entity(int x_val, int y_val, int hp_val, NameList char_name);
	virtual ~Entity();
	//~Entity();
	virtual void PrintName();
	
	virtual void PrintEntityName();

	void PrintAllValues();
#if abstractExists
	virtual void SetHP(int val) = 0;
#else
	void SetHP(int val);
#endif
};



#endif // !ENTITY
