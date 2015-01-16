#ifndef ENEMY_H
#define ENEMY_H
#include "character.hpp"

class Enemy : public Character {
	private:
		int xp;
	public:
		Enemy();
		int getAttackDmg();
		int getXP();
		void getNew(int pcLevel);
};

#endif