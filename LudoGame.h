#include"Board.h"
#include"Team.h"
#include"Dice.h"
#include"graphics.h"
//#include"Player.h"
#pragma once

class LudoGame
{
	friend class Player;
	friend class Team;
protected:
	Board* MoveBoard;
	vector<Team>T;
	vector<Player>Ps;
	Dice D;
	int NOT; int NOP;
	int Turn; int tc;
public:
	LudoGame()
	{

	}
	void Initialize();
	void Print_Game();
	void Play_Turn();
	bool Out_of_Home();
	bool Turn_Change();
	void Piece_Select(Point S);
	void Dice_Number_Select();
	void Update_Board();
	void Move_On_Board();
	bool Selected_Piece_Win(Point S);
	bool Is_Kill(Point S);
	void Move(Point S);
	void Display_Stats();
	void Prt_Team_Win();
	void Initialize_Home();
	void Play();
	void GetInput(Point& S);

};

