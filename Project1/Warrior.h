#pragma once
#include "Entity.h"

class Warrior :public Entity
{
public:
	Warrior();
	Warrior(float width, float height, float x, float y, Color color, Color secondary, Board* board);
	~Warrior();
	void setAppearance();
	void update();

};