//
// Created by joshu on 29/12/25.
//

#ifndef ENIGMA_ENIGMA_HPP
#define ENIGMA_ENIGMA_HPP

#include <string>
#include "rotor.hpp"
using namespace std;

static Rotor ROTOR1("ghabcdefijklmnopqrstuvwxyz");
static Rotor ROTOR2("abcdefghijklmnopqrstuvwxyz");
static Rotor ROTOR3("abcdefghijklmnopqrstuvwxyz");
static Rotor ROTOR4("abcdefghijklmnopqrstuvwxyz");
static Rotor ROTOR5("abcdefghijklmnopqrstuvwxyz");

class Enigma
{
public:
	Enigma();
	void changeSettings(const int order[3], const int starts[3]);
	void changeSettings(const int order[3], const int starts[3], const char plugs[10][2]);

	void encryptString(string text);

private:
	// Curr Settings
	int rotorOrder[3]; // order of the rotors: Not Necessary
	int rotorStarts[3]; // index the rotors start at: Not Necessary
	char plugBoard[10][2]; // pairs of letters on the plug board
	bool usingPlugs = false;

	Rotor *rotors[3]; // actual rotor addresses
};

#endif //ENIGMA_ENIGMA_HPP