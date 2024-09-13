#pragma once
#include "Actor.h"

class FSlime : public FActor
{
public:

	FSlime();
	virtual ~FSlime();

	virtual void Move() override;
	void Attack();

};

