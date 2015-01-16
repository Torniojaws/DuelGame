#ifndef CHARACTER_H
#define CHARACTER_H

class Character {
	protected:
		std::string name;
		int attack;
		int defense;
		int health;
		int level;
	public:
		Character();
		virtual bool isAlive();
		int getHealth();
		std::string getName();
		int getAttackDmg();
		int takeDamage(int d);
};

#endif