#include "Player.h"

Player::Player()
{
}

Player::~Player()
{
}

void Player::Place()
{
	int i = 0;
	Tabuleiro *current;
	current = Gettab();
	MB->Boatcreate();
	current->SetCell(2, 4, 'A');
}

void Player::Move()
{
}
