#ifndef PLAYER_H
#define PLAYER_H
#include "character.hpp"

class Player : public Character {
	private:
		int experience;
		void checkLevel();
	public:
		Player();
		void addXP(int n);
		int getLevel();
		void heal();
};

#endif