#pragma once
#include"Actor.h"


class FPlayer : public FActor
{
public:

	FPlayer();
	virtual ~FPlayer();

protected:

	virtual int HP() override;



};

