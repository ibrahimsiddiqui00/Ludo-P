#include "Player.h"
#include"Board.h"
Player::Player(const string& N, int C, int NOP) :Name(N), Clr(C)
{
	Home = new Board[6];
	for (int i{ 0 }; i < 6; i++)
	{
		Home[i].setPlayer(*this);
	}
	Pcs = new Piece * [NOP];
}

