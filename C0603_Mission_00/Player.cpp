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

	cout << "���� �̵��Ѵ�!" << endl;
	FActor::Move();

}

void FPlayer::Attack()
{

	cout << "���� ģ��!" << endl;
	FActor::Attack();

}


void FPlayer::Die(int respawn)
{
}
