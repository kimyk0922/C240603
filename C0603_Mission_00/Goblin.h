#pragma once
#include "Actor.h"

class FGoblin : public FActor
{

public:

	FGoblin();
	virtual ~FGoblin();

	virtual void Move() override;
	void Attack();

};

