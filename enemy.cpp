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

// Monsters have a unique attack method
int Enemy::getAttackDmg() {
	return attack;
}

int Enemy::getXP() {
	return xp;
}

void Enemy::getNew(int pcLevel) {
	std::cout << "** GRAAARR!! ** A new monster appears!" << std::endl;
	attack = pcLevel * 3;
	defense = pcLevel * 10;
	health = pcLevel * 30;
	xp = health * defense + attack;
}