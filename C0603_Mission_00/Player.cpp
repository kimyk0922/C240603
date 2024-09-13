#include "Player.h"
#include "Actor.h"
#include <iostream>


using namespace std;


FPlayer::FPlayer()
{

}

FPlayer::~FPlayer()
{

}

void FPlayer::Move()
{

	cout << "나는 이동한다!" << endl;
	FActor::Move();

}

void FPlayer::Attack()
{

	cout << "나는 친다!" << endl;
	FActor::Attack();

}


void FPlayer::Die(int respawn)
{
}
