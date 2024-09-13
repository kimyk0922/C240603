#include "Monster.h"
#include "Actor.h"
#include "Goblin.h"
#include"Slime.h"
#include"Wildboar.h"

#include <iostream>


using namespace std;


FMonster::FMonster()
{

}

FMonster::~FMonster()
{

}

int FMonster::Spawn()
{

	int Goblin = rand() % 10 + 1;
	int Wildboar = rand() % 10 + 1;
	int Slime = rand() % 10 + 1;

	return 0;
}
