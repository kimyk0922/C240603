#include "Actor.h"
#include "Monster.h"

#include <iostream>


using namespace std;


FActor::FActor()
{

	HP = 200;

}

FActor::~FActor()
{

}

void FActor::Turn()
{

}

void FActor::Attack()
{
	cout << "����!" << endl;
}

void FActor::Move()
{
	cout << "�̵�!" << endl;
}

AActor::AActor()
{

	X = 0;
	Y = 0;
	Shape = ' ';

}

AActor::~AActor()
{



}
