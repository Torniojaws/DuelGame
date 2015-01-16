#include <iostream>
#include "enemy.hpp"

Enemy::Enemy() {
	std::cout << "I\'m a monsterman!" << std::endl;
	name = "Monster";
	attack = 3;
	defense = 10;
	health = 30;
	xp = health * defense + attack;
}

bool Enemy::isAlive() {
	return health > 0;
}

int Enemy::getHealth() {
	return health;
}

std::string Enemy::getName() {
	return name;
}

int Enemy::getAttackDmg() {
	return attack;
}

int Enemy::getXP() {
	return xp;
}

int Enemy::takeDamage(int d) {
	int effectiveDamage = d - (defense/100);
	health -= effectiveDamage;
}

void Enemy::getNew(int pcLevel) {
	attack = pcLevel * 3;
	defense = pcLevel * 10;
	health = pcLevel * 30;
	xp = health * defense + attack;
}