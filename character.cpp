#include <iostream>
#include "character.hpp"

Character::Character() {
	name = "Dummy";
	attack = 1;
	defense = 1;
	health = 1;
	level = 1;
}

bool Character::isAlive() {
	return health > 0;
}

int Character::getHealth() {
	return health;
}

std::string Character::getName() {
	return name;
}

int Character::getAttackDmg() {
	int dmg = attack * level;
	return dmg;
}

int Character::takeDamage(int d) {
	int effectiveDamage = d - (defense/100);
	std::cout << name << " takes " << effectiveDamage << " DMG! ";
	health -= effectiveDamage;
	std::cout << "After the attack, " << health << " HP remains." << std::endl;
}