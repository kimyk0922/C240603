#include<iostream>

#include"Actor.h"
#include"Monster.h"
#include"Player.h"
#include"Goblin.h"
#include"Slime.h"
#include"Wildboar.h"

#include<vector>



using namespace std;








/*
class

Player
	HP()
	Turn()
	Attack()
	Move()

Die(respawn)


Monster
	Spawn()
	HP()
	Turn()
	Attack()
	Move()
	Die()

	Goblin
	Slime
	Wildboar


void

	HP()
	Attack()
	Die()
	Move()
	Spawn()


	*/

FActor Actor;
FMonster Monster;
FPlayer Player;

inline int Sum(int A, int B)
{

}
int main()
{
	vector<FActor*> Actor;
	FPlayer* Player = new FPlayer();	//	instantiate(생성하다)

//===============================각각의 랜덤한 몬스터 생성==============================//
	

	srand(time(0));
	int GoblinCount = rand() % 10 + 1;
	int WildboarCount = rand() % 10 + 1;
	int SlimeCount = rand() % 10 + 1;

	//FMonster Spawn();

/*	1
	FGoblin* Goblin = new FGoblin[GoblinCount];				
	FWildboar* Wildboar = new FWildboar[WildboarCount];
	FSlime* Slime = new FSlime[SlimeCount];
*/

/*	2
	vector<FGoblin*> Goblins;
	vector<FWildboar*> Wildboars;
	vector<FSlime*> Slimes;
*/

/*	2
	for (int i = 0; i < GoblinCount; ++i)
	{

		Goblins.push_back(new FGoblin());

	}

	for (int i = 0; i < WildboarCount; ++i)
	{

		Wildboars.push_back(new FWildboar());

	}

	for (int i = 0; i < GoblinCount; ++i)
	{

		Slimes.push_back(new FSlime());

	}
*/

	int StageMonsterCount[10] = { 1,1,1,2,2,2,3,3,5,6 };
	int Stage = 1;


	for (int i = 0; i < StageMonsterCount[Stage]; ++i)
	{
		int Type = rand() % 10;
		switch (Type)
		{
		case 0:								//	20%
			Actor.push_back(new FGoblin());
			break;

		case 1:								//	60%
		case 2:
		case 3:
		case 4:
			Actor.push_back(new FWildboar());
			break;

		case 5:								//	20%
			Actor.push_back(new FSlime());
			break;

		}
	}

/*	3
	for (int i = 0; i < 10; ++i)
	{
		int Type = rand() % 10;
		switch (Type)
		{
		case 0:								//	20%
			Actor.push_back(new FGoblin());
			break;

		case 1:								//	60%
		case 2:
		case 3:
		case 4:
			Actor.push_back(new FWildboar());
			break;
			
		case 5:								//	20%
			Actor.push_back(new FSlime());
			break;
		
		}
	}
*/


//===================================================================================//




//=================================이동 및 공격의 반복문================================//

/*	1
	while (true)

	{

		Player->Move();

		for (int i = 0; i < GoblinCount; ++i)
		{

			(rand() % 2 == 0) ? Goblin[0].Move() : Goblin[0].Attack();

		}

		for (int i = 0; i < WildboarCount; ++i)
		{

			(rand() % 2 == 0) ? Wildboar[0].Move() : Wildboar[0].Attack();

		}

		for (int i = 0; i < GoblinCount; ++i)
		{

			(rand() % 2 == 0) ? Slime[0].Move() : Slime[0].Attack();

		}

	}
*/

	while (true)
	{
		for (auto Actor : Actor)
		{

			Actor->Move();

		}

	}


	for (auto Actor : Actor)
	{

		delete Actor;

	}

	Actor.clear();


//====================================================================================//

/*
	vector<FMonster*> Monster;
	Monster.push_back(new FMonster);
*/
	


/*
	2
	delete Player;

	for (FGoblin* Goblin : Goblins)
	{

		delete Goblin;


	}


	for (FWildboar* Wildboar : Wildboars)
	{

		delete Wildboar;


	}


	for (FSlime* Slime : Slimes)
	{

		delete Slime;


	}

*/


	
/*

	delete[] Goblin;
	delete[] Wildboar;
	delete[] Slime;

*/

	return 0;
}