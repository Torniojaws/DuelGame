#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player {
	private:
		std::string name;
		int attack;
		int defense;
		int health;
		int experience;
		int level;
		void checkLevel();
	public:
		Player();
		bool isAlive();
		int getHealth();
		std::string getName();
		int getAttackDmg();
		void addXP(int n);
		int takeDamage(int d);
		int getLevel();
		void heal();
};

#endif