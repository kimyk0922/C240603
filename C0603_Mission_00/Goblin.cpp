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

	cout << "����� �پ�´�!" << endl;
	FActor::Move();

}

void FGoblin::Attack()
{

	cout << "����� �����ؿ´�!" << endl;
	FActor::Attack();

}
