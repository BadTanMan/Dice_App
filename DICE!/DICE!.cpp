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
	int num;
	int rollcount = 0;
	srand(std::time(0));
	greetings();

	while (!quit)
	{
		cout << endl;
		cout << "\t\t\tRollcount: " << rollcount << endl; //display total roll count
		cout << "Enter dice: ";
		getline(cin, user_i);
		cout << endl;
		transform(user_i.begin(), user_i.end(), user_i.begin(), ::toupper);//convert input to uppercase for both lower and uppercase input!
		rollcount++;//adds +1 to the total rollcount of the session
		if (user_i == "D4") //D4 roll
		{
			cout << "Rolling..." << endl;
			cout << endl;
			num = rand() % 4 + 1;
			cout << "D4: " << num << endl;
		}
		else if (user_i == "D6") //d6 roll
		{
			cout << "Rolling..." << endl;
			cout << endl;
			num = rand() % 6 + 1;
			cout << "D6: " << num << endl;
		}
		else if (user_i == "D8") //D8 roll
		{
			cout << "Rolling..." << endl;
			cout << endl;
			num = rand() % 8 + 1;
			cout << "D8: " << num << endl;
		}
		else if (user_i == "D10") //d10 roll
		{
			cout << "Rolling..." << endl;
			cout << endl;
			num = rand() % 10 + 1;
			cout << "D10: " << num << endl;
		}
		else if (user_i == "D100") //d100 roll
		{
			cout << "Rolling..." << endl;
			cout << endl;
			num = rand() % 100 + 1;
			cout << "D100: " << num << endl;
		}
		else if (user_i == "D12") ///d12 roll
		{
			cout << "Rolling..." << endl;
			cout << endl;
			num = rand() % 12 + 1;
			cout << "D12: " << num << endl;
			num = NULL;
		}
		else if (user_i == "D20") //d20 roll
		{
			cout << "Rolling..." << endl;
			cout << endl;
			num = rand() % 20 + 1;
			cout << "D20: " << num << endl;
		}
		else if (user_i == "EXIT") //exit program;
		{
			cout << endl;
			quit = true;
			exit(0);
		}
		else	//catches non string input
		{
			cout << endl;
			rollcount--;	//counterbalanaces rollcount++ so player cannot get negative rolls!
			cout << "Nope!" << endl;
		}
	}
	return EXIT_SUCCESS;
}

