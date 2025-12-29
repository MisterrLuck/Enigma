//
// Created by joshu on 29/12/25.
//

#ifndef ENIGMA_ROTOR_HPP
#define ENIGMA_ROTOR_HPP
#include <string>
using namespace std;

struct Rotor
{
public:
	explicit Rotor(const string &configuration);
	char encryptChar(char input) const;
	char decryptChar(char input) const;
	bool rotate();
	void rotateTo(const int index) { rotationIndex = index % 26; }

private:
	string config;
	int rotationIndex; // current rotation: % 26 to wrap around

	static int charToInt(char character);
};

#endif //ENIGMA_ROTOR_HPP