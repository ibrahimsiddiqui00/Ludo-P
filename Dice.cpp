#include "Dice.h"
bool Dice::Left()
{
	return false;
}
void Dice::PlayDice()
{
	int num, i = 0;
	do
	{
		num = Roll();
		Rolled[i] = num;
		i++;
	} while (num == 6 && i < 3);
}


int Dice::Roll()
{
	return 0;
}

void Dice::Play_Animation()
{
}
