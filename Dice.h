#pragma once
class Dice
{
private:
	//rand()%6+1
	int Roll();		//this will generate a random number b/w 1 to 6		//utility function
	void Play_Animation();		//this will animate the dice on the graphics.h window this will be inside the PlayDice function
protected:
	int* Rolled;
public:
	Dice()
	{
		Rolled = new int[3];
	}
	/*const int operator[](int i)
	{
		return Rolled[i];
	}*/
	void PlayDice();	// this will play the turn for a particular player and the validity will be checked in this function
	//Play Dice function will initialize the Rolled Array of integers
	bool Left();		//this function will tell whether the player has any remaining dice rolls left or not

};

