#pragma once
class FActor
{
public:

	FActor();
	virtual ~FActor();


	void Attack();
	virtual void Move();

	inline int GetHP() { return HP; }
	void SetHP(int NewHP);


protected:

	int HP;
	
	void Turn();


};

class AActor
{
public:
	
	AActor();
	AActor();
	virtual ~AActor();


	char Shape;

	int X;
	int Y;


	void Tick();
	void Render();
};

