#pragma once
#include "Point.h"
#include "Piece.h"
#include"Player.h"
#include<vector>
class Board
{
	friend class Player;
protected:
	Point P;
	vector<Piece*> CP;
	int BG;
	bool Safe;
public:
	Board(int bg, Point p, vector<Piece*> cp, bool S = false) : BG(bg), P(p), Safe(S)		//for the move board
	{
		CP = cp;
	}
	Board()
	{

	}
	void setPlayer(Player& P)		//for the home area
	{
		BG = P.Clr;
		Safe = true;
	}
	int NPcs();
	bool ValidPiece(Team T);
	bool ValidPiece(Player T);

};

