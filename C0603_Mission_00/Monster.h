#pragma once
#include "Actor.h"

class FMonster :public FActor
{
public:

	FMonster();
	virtual ~FMonster();

	int Spawn();

protected: 

	void Die();



};

