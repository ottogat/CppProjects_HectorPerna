// RandomEnemyGenerator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

enum EnemyType { zombie, vampire, ghost, witch };

struct Enemy {
	EnemyType type;
	string name;
	int health;
};

bool operator == (Enemy a, Enemy b) {
	return (a.name == b.name && a.type == b.type);
}

void CreateRandomEnemy() {

}

int main()
{
	return 0;
}