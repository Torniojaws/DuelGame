#ifndef ENEMY_H
#define ENEMY_H
#include <string>

class Enemy {
	private:
		std::string name;
		int attack;
		int defense;
		int health;
		int xp;
	public:
		Enemy();
		bool isAlive();
		int getHealth();
		std::string getName();
		int getAttackDmg();
		int getXP();
		int takeDamage(int d);
		void getNew(int pcLevel);
};

#endif