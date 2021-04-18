#pragma once
#include "Tabuleiro.h" 
#include "Navalpoint.h"
#include "Boat.h"
class Player
{
private:
	char Nome[50];
	Tabuleiro T;
	Boat MB[10];
	Navalpoint Tiros[100];
public:
	Player();
	~Player();
	Tabuleiro* Gettab() { return &T; }
	Boat* Getboat() { return MB; }
	void Place();
	void Move();
};
