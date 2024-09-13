#pragma once
#include "Actor.h"

class FWildboar : public FActor
{
public:

	FWildboar();
	virtual ~FWildboar();

	virtual void Move() override;
	void Attack();

};

