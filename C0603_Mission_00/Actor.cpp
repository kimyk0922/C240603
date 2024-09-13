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
	cout << "공격!" << endl;
}

void FActor::Move()
{
	cout << "이동!" << endl;
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
