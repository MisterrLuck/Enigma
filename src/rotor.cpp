//
// Created by joshu on 29/12/25.
//

#include "../include/rotor.hpp"

#include <cctype>

Rotor::Rotor(const string &configuration)
{
	rotationIndex = 0;
	config = configuration;
	// for (int i = 0; i < 26; i++)
	// 	config[i] = configuration[i];
}

char Rotor::encryptChar(const char input) const
{
	return config[(charToInt(input)+rotationIndex) % 26];
}

char Rotor::decryptChar(const char input) const
{
	const int index = (config.find(input) - rotationIndex) % 26;
	return config[index];
}

bool Rotor::rotate()
{
	rotationIndex = (rotationIndex + 1) % 26;
	return rotationIndex != 0;
}

int Rotor::charToInt(char character)
{
	character = std::tolower(character);
	return character - 'a';
}
