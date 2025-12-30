//
// Created by joshu on 29/12/25.
//

#include "../include/enigma.hpp"

#include <iostream>
using namespace std;

Enigma::Enigma() : rotorOrder{1, 2, 3}, rotorStarts{}, plugBoard{}, rotors{}
{
	reflector.reconfigure(REFLECTOR);
}

void Enigma::changeSettings(const int order[3], const int starts[3])
{
	for (int i = 0; i < 3; i++)
	{
		rotorOrder[i] = order[i];
		rotorStarts[i] = starts[i];

		switch (rotorOrder[i])
		{
			case 1:
				rotors[i].reconfigure(ROTOR1);
				break;
			case 2:
				rotors[i].reconfigure(ROTOR2);
				break;
			case 3:
				rotors[i].reconfigure(ROTOR3);
				break;
			case 4:
				rotors[i].reconfigure(ROTOR4);
				break;
			case 5:
				rotors[i].reconfigure(ROTOR5);
				break;
			default:
				cerr << "Invalid rotor number" << endl;
				break;
		}
		rotors[i].rotateTo(starts[i]);
	}
	usingPlugs = false;
}

void Enigma::changeSettings(const int order[3], const int starts[3], const char plugs[10][2])
{
	changeSettings(order, starts);
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			plugBoard[i][j] = plugs[i][j];
		}
	}
	usingPlugs = true;
}

string Enigma::encryptString(const string &text)
{
	string encryptedText = "";
	string allowedChars = "abcdefghijklmnopqrstuvwxyz";
	for (char c : text)
	{
		char newChar = tolower(c);
		if (allowedChars.find(newChar) == string::npos) continue;
		for (int i = 0; i < 3; i++)
		{
			newChar = rotors[i].encryptChar(newChar);
		}
		newChar = reflector.encryptChar(newChar);
		for (int i = 2; i >= 0; i--)
		{
			newChar = rotors[i].decryptChar(newChar);
		}
		encryptedText += newChar;
		if (rotors[0].rotate())
		{
			if (rotors[1].rotate())
			{
				rotors[2].rotate();
			}
		}
	}
	return encryptedText;
}
