#include "../include/rotor.hpp"

#include <cctype>
#include <iostream>
using namespace std;

Rotor::Rotor()
{
	reconfigure("abcdefghijklmnopqrstuvwxyz");
}

Rotor::Rotor(const string configuration)
{
	reconfigure(configuration);
}

void Rotor::reconfigure(const string configuration)
{
	rotationIndex = 0;
	config = configuration;
}

char Rotor::encryptChar(const char input) const
{
	return config[wrapAround(charToInt(input)+rotationIndex)];
}

char Rotor::decryptChar(const char input) const
{
	const int index = wrapAround(config.find(tolower(input)) - rotationIndex);
	return 'a' + index;
}

bool Rotor::rotate()
{
	rotationIndex = wrapAround(rotationIndex + 1);
	return rotationIndex == 0;
}

int Rotor::charToInt(char character)
{
	character = std::tolower(character);
	return character - 'a';
}

int Rotor::wrapAround(const int num)
{
	const int newNum = (num+26) % 26;
	return newNum;
}
