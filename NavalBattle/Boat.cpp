#include "Boat.h"
#include <iostream>

using namespace std;

Boat::Boat()
{
}

Boat::~Boat()
{
}

void Boat::Boatcreate()
{
	int i = 0,x = 0,y = 0;
	for (i = 0; i < 4; i++) 
	{
		cout << "Indique a posicao para o " << i+1 << " submarino" << endl;
		cin >> x >> y;
		position[i].SetX(x);
		position[i].SetY(y);
		position[i].SetC('O');
	}

}
