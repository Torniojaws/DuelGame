#include <iostream>
#include "player.hpp"
#include "enemy.hpp"

int main() {
	Player pc;
	Enemy monster;
	
	while(pc.isAlive()) {
		// Player has the first round
		std::cout << pc.getName() << " attacks " << monster.getName() << "!" << std::endl;
		int dmg = pc.getAttackDmg();
		std::cout << monster.getName() << " takes " << dmg << " DMG! ";
		monster.takeDamage(dmg);
		std::cout << "It now has " << monster.getHealth() << " HP left." << std::endl;
		
		// The monster strikes back unless dead
		if(monster.isAlive()) {
			std::cout << "Monster retaliates!" << std::endl;
			int monsterDmg = monster.getAttackDmg();
			std::cout << pc.getName() << " took " << monsterDmg << " DMG! ";
			pc.takeDamage(monsterDmg);
			std::cout << "You have " << pc.getHealth() << " HP left." << std::endl;
		} else {
			// Player receiveds a reward for slaying the enemy successfully!
			int experience = monster.getXP();
			std::cout << monster.getName() << " has died! You earn " << experience << " XP." << std::endl;
			pc.addXP(experience);
			monster.getNew(pc.getLevel()); // Reset enemy and adjust to PC level
		}
		
		// You choose what to do.
		std::cout << "\nWhat is your action? (A)ttack / (H)eal / (R)un away and end the quest?";
		std::string pcChoice;
		std::cin >> pcChoice;
		if(pcChoice == "A" || pcChoice == "a") {
			continue;
		} else if(pcChoice == "H" || pcChoice == "h") {
			pc.heal();
		} else {
			break;
		}
	}
	
	return 0;
}