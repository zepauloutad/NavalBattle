#pragma once
#include "Player.h"
#include "Tabuleiro.h"
#include <string>

class Jogo
{
private:
//	Jogador* player1, * player2; // Na casse Jogador devem guardar os tiros dados e os seus barcos/navios
	Player T1, T2;

public:
	Jogo();
	virtual ~Jogo();

	void NewGame();

	void Save(std::string file);
	void Read(std::string file);
};

