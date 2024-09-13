#include "Monster.h"
#include <iostream>

FMonster::FMonster()
{
	HP = 100;
}

FMonster::~FMonster()
{

}

int FMonster::Spawn()
{

	int Goblins = rand() % 10 + 1;
	int Slimes = rand() % 10 + 1;
	int Pig = rand() % 10 + 1;

}
