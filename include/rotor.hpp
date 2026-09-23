#pragma once

#include <string>
using namespace std;

struct Rotor
{
public:
	Rotor();
	explicit Rotor(const string configuration);
	void reconfigure(const string configuration);
	char encryptChar(char input) const;
	char decryptChar(char input) const;
	bool rotate();
	void rotateTo(const int index) { rotationIndex = index % 26; }

private:
	string config;
	int rotationIndex; // current rotation: % 26 to wrap around

	static int charToInt(char character);
	static int wrapAround(int num);
};
