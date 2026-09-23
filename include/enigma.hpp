#pragma once

#include <string>
#include "rotor.hpp"
using namespace std;

#define ROTOR1    "jgdqoxuscamifrvtpnewkblzyh"
#define ROTOR2    "ntzpsfbokmwrcjdivlaeyuxhgq"
#define ROTOR3    "jviubhtcdyakeqzposgxnrmwfl"
#define ROTOR4    "abcdefghijklmnopqrstuvwxyz"
#define ROTOR5    "abcdefghijklmnopqrstuvwxyz"
#define REFLECTOR "qyhognecvpuztfdjaxwmkisrbl"

class Enigma
{
public:
	Enigma();
	void changeSettings(const int order[3], const int starts[3]);
	void changeSettings(const int order[3], const int starts[3], const char plugs[10][2]);

	string encryptString(const string &text);

private:
	// Curr Settings
	int rotorOrder[3]; // order of the rotors: Not Necessary
	int rotorStarts[3]; // index the rotors start at: Not Necessary
	char plugBoard[10][2]; // pairs of letters on the plug board
	bool usingPlugs = false;

	Rotor rotors[3]; // actual rotor addresses
	Rotor reflector;
};
