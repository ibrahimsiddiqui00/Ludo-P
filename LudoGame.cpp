#include "LudoGame.h"
#include"Player.h"

void LudoGame::Initialize()
{
	char t;
	cout << "Enter the Number of Players";
	//cin >> NOP;
	NOP = 4;	//assuming the NOP is 4
	cout << "Do you want to Play in Teams (Y/N)";
	//cin >> t;
	t = 'y';
	//we are assuming here that the user will give correct input so we don't need to check 
	if (t == 'Y' || t == 'y')
	{
		NOT = NOP / 2;
		Player P1("Player 1", 0, 4), P2("Player 2", 1, 4), P3("Player 3", 2, 4), P4("Player 4", 3, 4);
		Ps.push_back(P1); Ps.push_back(P2); Ps.push_back(P3); Ps.push_back(P4);
		Team T1, T2;
		T1.AddPlayer(P1); T1.AddPlayer(P3);
		T2.AddPlayer(P2); T1.AddPlayer(P4);
		T.push_back(T1); T.push_back(T2);
	}
}
void LudoGame::Initialize_Home()
{
	for (int i{ 0 }; i < NOP; i++)
	{

	}
}

void LudoGame::Play()
{
	Point S;
	Initialize();		//memory allocation step 1	
	Print_Game();		// this function prints the ludo board and the players pieces 
//the draw functions of piece, board etc will be called in this function
	do
	{
		Play_Turn();	// this function displays the turn of the current player and
		//rolls the dice for the player.The validation will be done in the Dice class so we don’t need to check it here.
		if (!Out_of_Home())
		{
			Turn_Change();
			continue;
		}
		do
		{
			Piece_Select(S);//it will check whether the user has selected a valid piece according   
													//	to the rules of the game.

			Dice_Number_Select();	//this will ask by which number rolled on the dice the 
									//selected piece is to be moved in case of six / multiple dice rolls

			Move(S);

		} while (D.Left() != 0);

		Prt_Team_Win();			//checks and disables the turn for a team if that team has already won

		while (T.size() > 1);
	} while (1);

	Display_Stats();

}
void LudoGame::GetInput(Point& S)
{

}

void LudoGame::Print_Game() 
{
	initwindow(1300, 800, "LUDO");
	int R = 20, sx = 100,sy=60;
	for (int i{ 0 }; i < 6; i++)		//for the extreme left upper
	{
		circle((i*R*2)+sx, 300, R);
	}
	for (int i{ 0 }; i < 6; i++)		//for the extreme left straight
	{
		circle(350, (i*R*2)+sy, R);
	}
	for (int i{ 0 }; i < 2; i++)		//for the 1st one 3
	{
		circle(100, ((i * R * 2) + sy)+((5 * R * 2) + sy+R), R);
	}
	for (int i{ 0 }; i < 5; i++)	//for the left lower
	{
		circle((i * R * 2) + sx+(R*2), 300+(R*4), R);
	}
	for (int i{ 0 }; i < 5; i++)
	{
		circle(350, ((i * R * 2) + sy)+(R*18), R);
	}
}
void LudoGame::Play_Turn() {}
bool LudoGame::Out_of_Home() { return false; }
bool LudoGame::Turn_Change() { return false; }
void LudoGame::Piece_Select(Point S)
{
	GetInput(S);
	if (MoveBoard[2].NPcs() == 0)
		return;
	do
	{
		MoveBoard[4].ValidPiece(Ps[Turn]);	//T[Turn] is a team object which is currently playing its turn 
	} while (1);
}
void LudoGame::Dice_Number_Select() {}
void LudoGame::Update_Board() {}
void LudoGame::Move_On_Board() {}

bool LudoGame::Selected_Piece_Win(Point S) { return false; }
bool LudoGame::Is_Kill(Point S)
{
	return false;
}
void LudoGame::Move(Point S)
{
	if (Is_Kill(S))
	{
		tc++;
	}
	else
	{
		if (tc != 0)tc--;
	}
	if (tc == 0 && D.Left() == 0)
	{

	}
}
void LudoGame::Display_Stats()
{

}
void LudoGame::Prt_Team_Win()
{

}