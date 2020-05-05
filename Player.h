#include<iostream>
#include<string>
//#include"Board.h"
using namespace std;
#pragma once

class Piece;
class Board;
class Player
{
	friend class Team;
	friend class LudoGame;
	friend class Board;
protected:
	string Name;
	Board* Home;
	int Clr;
	Piece** Pcs;
public:
	Player(const string& N, int C, int NOP);
	/*Board& operator[](int i)
	{
			return Home[i];
	}*/
	int CurrIndex(Piece* FP);		//this returns where the piece is lying on the home array 
	int PiecesLeft();				//return how many pieces of the player has left 
};

