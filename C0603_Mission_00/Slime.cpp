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

	cout << "�������� ���´�!" << endl;
	FActor::Move();

}

void FSlime::Attack()
{

	cout << "�������� ���ƿ´�!" << endl;
	FActor::Attack();

}
