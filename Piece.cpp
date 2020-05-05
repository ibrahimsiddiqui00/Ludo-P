#include "Piece.h"
#include "Player.h"
#include "Point.h"
Piece::Piece(int C, Team* T) : Clr(C), CT(T), OutofBase(false), HasKilled(false) {}
void Piece::Draw(Point P)
{

}
bool Piece::IsMyPiece(Team T)
{
	return &T == CT;
}
bool Piece::IsMyPiece(Player P)
{
	return Clr == P.GetColour();
}
void Piece::Reset(Point E)
{
	OutofBase = false;
	Draw(E);
}
