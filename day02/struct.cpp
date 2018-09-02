#include <iostream>

using namespace std;

struct Warrior {
	int health;
	int attackdamage;
};

struct Mage {
	int health;
	int abilitypower;
};

int main() {
	Warrior player1;
	Mage player2;

	player1.health = 500;
	player1.attackdamage = 15;

	player2.health = 500;
	player2.abilitypower = 10;

	cout << "Warrior: " << player1.health << "\n" << "Mage: " << player2.health << endl;

	return 0;
}
