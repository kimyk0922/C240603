#include "Wildboar.h"
#include "Monster.h"
#include "Actor.h"

#include <iostream>


using namespace std;



FWildboar::FWildboar()
{
}

FWildboar::~FWildboar()
{
}

void FWildboar::Move()
{

	cout << "와일드 보어가 냄새를 맡는다!" << endl;
	FActor::Move();

}

void FWildboar::Attack()
{

	cout << "와일드 보어가 달려든다!" << endl;
	FActor::Attack();

}
