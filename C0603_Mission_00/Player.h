#pragma once
#include "Actor.h"

class FPlayer : public FActor
{
public:

	FPlayer();
	virtual ~FPlayer();
	
	virtual void Move() override;
	void Attack();

protected:

	void Die(int respawn);

};

