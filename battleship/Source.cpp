//Programmer: Aiden Reineke
//Battleship code

#include <iostream>
#include <fstream>
using namespace std;

//These are the variables and arrays
const int ROWS = 10;
const int COLS = 10;
int shipAmount = 17;
char board[ROWS][COLS];
char boardBlank[ROWS][COLS] = { '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', 
								'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', 
								'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', 
								'*', '*', '*', '*', '*', '*', '*', '*', '*', '*',  
								'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', 
								'*', '*', '*', '*', '*', '*', '*', '*', '*', '*',
								'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', 
								'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', 
								'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', 
								'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', };

//This function gives the player instructions on how to play the game
void intro()
{
	cout << "The game is BattleShip!" << endl;
	cout << "Your goal is to sink all 5 ships." << endl;
	cout << "You play the game by imputing the row and then the column." << endl;
	cout << "The rows and columns start at 0, 0. Good luck!" << endl << endl;
}

//This function takes in the battleship board from the .txt file
void setships()
{
	ifstream shipFile;
	shipFile.open("C:\\CIS114\\ships.txt", ios::in);

//This takes in the board and makes an array of it
	while (shipFile)
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				shipFile >> board[i][j];
			}
		}

	}
	shipFile.close();
}

//This function plays the game
void game()
{
	int tempR = 0;
	int tempC = 0;
	int total = 0;

//This stops the code after all ships are sunk
//If all ships are sunk then it tells the user
	while (shipAmount > 0)
	{
//This code takes in the user's guess for coordinates
		do {
			cout << "Coordinate: ";
			cin >> tempR;
			cin >> tempC;
			//If the user dosen't type a number between 0 and 9 they 
			//have to put new coordinates
			while ((tempR < 0) || (tempR > 9 || tempC < 0) || (tempC > 9)) {
				cout << "Please type two numbers between 0 and 9." << endl;
				cout << "Coordinate: ";
				cin >> tempR;
				cin >> tempC;
			}
			cout << endl;
			//This determines if the coordinate shosen has already been hit or not
			if (boardBlank[tempR][tempC] == 'H' || boardBlank[tempR][tempC] == 'M')
			{
				cout << "That coordinate has already been hit." << endl;
			}
		} while (boardBlank[tempR][tempC] == 'H' || boardBlank[tempR][tempC] == 'M');
		//If the coordinates hits on the board it shows an S
		if (board[tempR][tempC] == 'S')
		{
			boardBlank[tempR][tempC] = 'H';
			cout << "That was a hit!" << endl << endl;
			shipAmount -= 1;
		}
		//If the coordinates dosen't hit on the board it shows an M
		else {
			boardBlank[tempR][tempC] = 'M';
			cout << "That was a miss!" << endl << endl;
		}

		//This shows the board after the user has hit it
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				cout << boardBlank[i][j];
				cout << " ";
			}
			cout << endl;
		}
		//This adds to the ambout of turns you have had and prints it
		total += 1;
		cout << "You have had " << total << " total turns" << endl;
		cout << endl;
	}
	//This tells the user when they have sunk all the ships
	cout << "You sunk all the ships!" << endl;
}

int main()
{
	intro();
	setships();
	game();
	return 0;
}