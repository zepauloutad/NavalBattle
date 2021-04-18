#include "Jogo.h"
#include "Navalpoint.h"
#include <iostream>
using namespace std;

Jogo::Jogo()
{

}

Jogo::~Jogo()
{

}

void Jogo::NewGame()
{
	Navalpoint P1(1,1,'O'), P2(5, 'B', 'T'), P3(5, 'C', 'O'), P4(10, 'J', 'O');
   cout << "Jogo Batalha Naval 2020/2021\n\n\n";
   T1.Gettab()->SetCell(P1);
   T1.Gettab()->SetCell(P2);
   T1.Gettab()->SetCell(P3);
 
   
   T2.Gettab()->SetCell(P1);
   T2.Gettab()->SetCell(P2);
   T2.Gettab()->SetCell(P4);


   T1.Gettab()->Draw2(5, 4, *(T2.Gettab()));
   T1.Place();
   system("cls");
   T1.Gettab()->Draw2(5, 4, *(T2.Gettab()));

   Save("player.txt");
}

#pragma region  Read/Save
void Jogo::Save(string file)
{
	// Exemplo para escrever nm ficheiro os pontos de um tabuleiro com tiros e Barcos/Navios
	// Quando criarem a classe Jogador, deve ter um array do tipo "PontoNaval" com os seus "Tiros" dados e outro com os seus "Barcos/Navios", devem usar estes arrays para escrever no ficheiro e não o tabuleiro
	Navalpoint P;
	ofstream os;

	os.open(file);
	
	T1.Gettab()->Save(os);

	os.close();
}

void Jogo::Read(string file)
{

}
#pragma endregion