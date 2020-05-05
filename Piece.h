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
	Piece(int C, Team* T);
	void Draw(Point P);		//this will draw a particular piece
	bool IsMyPiece(Team T);  //this function will check whether this is the team's piece or not
	bool IsMyPiece(Player P); //this function will check whether this is the player's piece or not 	
	void Reset(Point E);		//when a piece is killed , it will be reset 

};
