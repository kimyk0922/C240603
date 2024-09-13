#pragma once
class FActor
{

public:

	FActor();
	virtual ~FActor();


	float Attack();
	int Move();
	virtual int HP();

protected:

	void Die();


};

