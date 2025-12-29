//
// Created by joshu on 29/12/25.
//

#ifndef ENIGMA_ENIGMA_HPP
#define ENIGMA_ENIGMA_HPP

#include "rotor.hpp"

static Rotor rotor1("abcdefghijklmnopqrstuvwxyz");
static Rotor rotor2("abcdefghijklmnopqrstuvwxyz");
static Rotor rotor3("abcdefghijklmnopqrstuvwxyz");
static Rotor rotor4("abcdefghijklmnopqrstuvwxyz");
static Rotor rotor5("abcdefghijklmnopqrstuvwxyz");

class Enigma
{
public:
	Enigma();
	void changeSettings(int rotorOrder[3], char rotorStarts[3]);

private:
	// Curr Settings
	int rotorOrder[3];
};

#endif //ENIGMA_ENIGMA_HPP