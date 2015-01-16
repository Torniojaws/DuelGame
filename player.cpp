#include <iostream>
#include <string>
#include "player.hpp"

Player::Player() {
	attack = 5;
	defense = 20;
	health = 40;
	experience = 0;
	level = 1;
	std::cout << "Player enters! What is your name?" << std::endl;
	std::string pcName;
	std::cin >> pcName;
	name = pcName;
}

bool Player::isAlive() {
	return health > 0;
}

int Player::getHealth() {
	return health;
}

std::string Player::getName() {
	return name;
}

int Player::getLevel() {
	return level;
}

int Player::getAttackDmg() {
	int dmg = attack * level;
	return dmg;
}

void Player::heal() {
	health += 20 * level;
}

int Player::takeDamage(int d) {
	int effectiveDamage = d - (defense/100);
	health -= effectiveDamage;
}

// Whenever PC gets experience, we check for level-up
void Player::addXP(int n) {
	experience += n;
	checkLevel();
}

// XP needed for level-up increases according to PC level
void Player::checkLevel() {
	int targetExperience = 2000 * level;
	if(experience >= targetExperience) {
		level += 1;
		std::cout << name << " has leveled up to level " << level << "!" << std::endl;
		experience = 0;
		int attackBonus = level;
		int defenseBonus = level*2;
		int healthBonus = level*4;
		health = 40 + healthBonus;
		//std::cout << "Attack +" << attackBonus << ", Defense +" << defenseBonus << ", Health +", << healthBonus << std::endl;
	}
}
