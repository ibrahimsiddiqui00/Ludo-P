#include"Team.h"
#include"Point.h"
#pragma once
class Piece
{
protected:
	Team* CT;
	bool OutofBase;
	bool HasKilled;
	int Clr;	//optional can be removed
public:
	Piece(int C, Team* T) : Clr(C), CT(T), OutofBase(false), HasKilled(false)
	{

	}
	void Draw(Point P);		//this will draw a particular piece
	bool IsMyPiece(Team T)
	{
		/*for (int i{ 0 }; i < T.Size(); i++)
		{
			if(Clr==T.PColor(i))
		}*/
		return &T == CT;
	}
	bool IsMyPiece(Player P);
	//this function will check whether this is the team's piece or not 	
	void Reset();		//when a piece is killed , it will be reset 

};

