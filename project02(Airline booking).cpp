//A program that allows user to make reservations for an airline
//programmed by Moeid Shariff

#include <iostream>
#include <string>
#include<iomanip>

using namespace std;

int main()
{
	char airchar[13][6];
	char type;
	int row;
	char seat;
	char input;

	//Initializes the elements of the array to *, indicating that all the seats are available
	for (int r = 0; r < 13; r++)
	{
		for (int c = 0; c < 6; c++)
		{
			airchar[r][c] = '*';
		}
	}

	bool flag = false;
	while (!flag)//Program keeps running until user terminates it by making a choice down below
	{
		//Main menu
		cout << " **C++ Airlines Booking System** " << endl;
		cout << endl;
		cout << "Rows 1 and 2 are first class (F)" << endl;
		cout << "Rows 3 through 7 are business class (B)" << endl;
		cout << "Rows 8 through 13 are economy class (E)" << endl;
		cout << endl;
		cout << "* - Indicates seat is available" << endl;
		cout << "X - Indicates seat is occupied" << endl;
		cout << endl;
		//Prints out the ticket reservation menu
		cout << "         " << "A  B  C  D  E  F" << endl;


		for (int r = 0; r < 13; r++)
		{
			cout << "Row" << setw(3) << r + 1 << "   ";
			for (int c = 0; c < 6; c++)
				cout << airchar[r][c] << setw(3);
			cout << endl;
		}
		cout << endl;

		cout << "Would you like to reserve seats? (y/n)" << endl;//Asks the user if they want to continue or terminate the program
		cin >> input;
		cout << endl;

		if (input == 'y' || input == 'Y')
		{
			//Asks for the ticket class from the user
			cout << "Enter Ticket type for First class(f),Business class(b),Economy class(e): ";
		cin >> type;
		cout << endl;

		if (type == 'f' || type == 'F')//displays the choices of rows for first class
		{
			cout << endl;
			cout << "You have choices from Rows (1) and Rows (2): ";
			cin >> row;
		}
		else if (type == 'b' || type == 'B')//displays the choices of rows for business class
		{
			cout << endl;
			cout << "You have choices from Rows (3) till Rows (7): ";
			cin >> row;
		}

		else if (type == 'e' || type == 'E')//displays the choices of rows for economy class
		{
			cout << endl;
			cout << "You have choices from Rows (8) till Rows (13): ";
			cin >> row;
		}
		cout << endl;
		//Asks the user for the location of the seat
		cout << "Enter your seat Location (A,B,C,D,E or F): ";
		cin >> seat;
		cout << endl;

		switch (seat)
		{

		case 'A':
		case 'a':
			//If the seat is reserved displays the user a message indicating seat is already booked.
			if (airchar[row - 1][0] == 'X')
			{
				cout << "Seat " << row << seat << " is not available" << endl;
				cout << endl;
			}
			else
				airchar[row - 1][0] = 'X';
			break;

		case 'B':
		case 'b':
			//If the seat is reserved displays the user a message indicating seat is already booked.
			if (airchar[row - 1][1] == 'X')
			{
				cout << "Seat " << row << seat << " is not available" << endl;
				cout << endl;
			}
			else
				airchar[row - 1][1] = 'X';//Reserves the seat location
			break;

		case 'C':
		case 'c':
			//If the seat is reserved displays the user a message indicating seat is already booked.
			if (airchar[row - 1][2] == 'X')
			{
				cout << "Seat " << row << seat << " is not available" << endl;
				cout << endl;
			}
			else
				airchar[row - 1][2] = 'X';//Reserves the seat location
			break;

		case 'D':
		case 'd':
			//If the seat is reserved displays the user a message indicating seat is already booked.
			if (airchar[row - 1][3] == 'X')
			{
				cout << "Seat " << row << seat << " is not available" << endl;
				cout << endl;
			}
			else
				airchar[row - 1][3] = 'X';//Reserves the seat location
			break;

		case 'E':
		case 'e':
			//If the seat is reserved displays the user a message indicating seat is already booked.
			if (airchar[row - 1][4] == 'X')
			{
				cout << "Seat " << row << seat << " is not available" << endl;
				cout << endl;
			}
			else
				airchar[row - 1][4] = 'X';//Reserves the seat location
			break;

		case 'F':
		case 'f':
			//If the seat is reserved displays the user a message indicating seat is already booked.
			if (airchar[row - 1][5] == 'X')
			{
				cout << "Seat " << row << seat << " is not available" << endl;
				cout << endl;
			}
			else
				airchar[row - 1][5] = 'X';//Reserves the seat location
			break;
		}
	}
		else
			exit(0);
  }	
		return 0;
}
	
