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

	cout << "���ϵ� ��� ������ �ô´�!" << endl;
	FActor::Move();

}

void FWildboar::Attack()
{

	cout << "���ϵ� ��� �޷����!" << endl;
	FActor::Attack();

}
