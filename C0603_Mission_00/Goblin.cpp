#include "Goblin.h"
#include "Monster.h"
#include "Actor.h"

#include <iostream>


using namespace std;


FGoblin::FGoblin()
{
}

FGoblin::~FGoblin()
{
}

void FGoblin::Move()
{

	cout << "고블린이 뛰어온다!" << endl;
	FActor::Move();

}

void FGoblin::Attack()
{

	cout << "고블린이 돌격해온다!" << endl;
	FActor::Attack();

}
