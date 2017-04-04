// DICE!.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <time.h>
#include <fstream>
#include <string>
#include <limits>
#include <windows.h>

using namespace std;

bool quit;

void greetings()
{
	cout << "DICE ROLLER.EXE" << endl;
	cout << endl;
	cout << endl;
	cout << "Commands:" << endl;
	cout << endl;
	cout << "\t\t  4 sided dice: d4" << endl;
	cout << endl;
	cout << "\t\t  6 sided dice: d6" << endl;
	cout << endl;
	cout << "\t\t  8 sided dice: d8" << endl;
	cout << endl;
	cout << "\t\t 10 sided dice: d10" << endl;
	cout << endl;
	cout << "\t\t 12 sided dice: d12" << endl;
	cout << endl;
	cout << "\t\t 20 sided dice: d20" << endl;
	cout << endl;
	cout << "\t\t100 sided dice: d100" << endl;
	cout << endl;
	cout << "\t\t  exit program: exit" << endl;
	cout << endl;
}

int main()
{	
	system("color 0a");
	string user_i;
	srand(std::time(0));
	greetings();

	while (!quit)
	{
		quit == false;
		cout << endl;
		cout << "Enter dice type: ";
		cin >> user_i;
		transform(user_i.begin(), user_i.end(), user_i.begin(), ::toupper);
		cout << endl;
		if (user_i == "D4")
		{
			cout << "Rolling..." << endl;
			cout << endl;
			int num = rand() % 4 + 1;
			cout << num << endl;
		}

		else if (user_i == "D6")
		{
			cout << "Rolling..." << endl;
			cout << endl;
			int num = rand() % 6 + 1;
			cout << num << endl;
		}

		else if (user_i == "D8")
		{
			cout << "Rolling..." << endl;
			cout << endl;
			int num = rand() % 8 + 1;
			cout << num << endl;
		}

		else if (user_i == "D10")
		{
			cout << "Rolling..." << endl;
			cout << endl;
			int num = rand() % 10 + 1;
			cout << num << endl;
		}

		else if (user_i == "D100")
		{
			cout << "Rolling..." << endl;
			cout << endl;
			int num = rand() % 100 + 1;
			cout << num << endl;
		}

		else if (user_i == "D12")
		{
			cout << "Rolling..." << endl;
			cout << endl;
			int num = rand() % 12 + 1;
			cout << num << endl;
		}

		else if (user_i == "D20")
		{
			cout << "Rolling..." << endl;
			cout << endl;
			int num = rand() % 20 + 1;
			cout << num << endl;
		}

		else if (user_i == "EXIT")
		{
			cout << endl;
			quit = true;
			exit(0);
		}

		else
		{
			cout << "Nope!" << endl;
		}
	}
	return 0;
}

