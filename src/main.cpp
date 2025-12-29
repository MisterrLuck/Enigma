#include <iostream>

#include "../include/enigma.hpp"
#include "../include/rotor.hpp"
using namespace std;

int main()
{
	// std::cout << Rotor::charToInt('A');
	// std::cout << Rotor::charToInt('a');
	// std::cout << Rotor::charToInt('d');
	const Rotor *rotor = &ROTOR1;
	const char enc = rotor->encryptChar('A');
	cout << enc << endl;
	const char enc2 = rotor->encryptChar(enc);
	cout << enc2 << endl;
	const char dec = rotor->decryptChar('G');
	cout << dec << endl;

	// Enigma machine;
	// constexpr int order[3] = {1, 2, 3};
	// constexpr int plugs[3] = {0, 0, 0};
	// // constexpr char board[10][2] = {};
	//
	// machine.changeSettings(order, plugs);

	return 0;
}