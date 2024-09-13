#include "Slime.h"
#include "Monster.h"
#include "Actor.h"

#include <iostream>


using namespace std;



FSlime::FSlime()
{
}

FSlime::~FSlime()
{
}

void FSlime::Move()
{

	cout << "슬라임이 기어온다!" << endl;
	FActor::Move();

}

void FSlime::Attack()
{

	cout << "슬라임이 날아온다!" << endl;
	FActor::Attack();

}
