#include <iostream>

#include "../include/enigma.hpp"
#include "../include/rotor.hpp"
using namespace std;

int main()
{
	// std::cout << Rotor::charToInt('A');
	// std::cout << Rotor::charToInt('a');
	// std::cout << Rotor::charToInt('d');
	// Rotor rotor(ROTOR1);
	// char enc = rotor.encryptChar('A');
	// cout << enc << endl;
	// enc = rotor.encryptChar(enc);
	// cout << enc << endl;
	// enc = rotor.decryptChar('g');
	// cout << enc << endl;
	// rotor.rotate();
	// cout << endl << "Rotate" << endl;
	//
	// enc = rotor.encryptChar('A');
	// cout << enc << endl;
	// enc = rotor.encryptChar(enc);
	// cout << enc << endl;
	// enc = rotor.decryptChar('g');
	// cout << enc << endl;
	//
	// cout << endl << -1%26 << endl << 27 % 26;

	Enigma machine;
	constexpr int order[3] = {1, 2, 3};
	constexpr int plugs[3] = {0, 0, 0};
	// // constexpr char board[10][2] = {};
	//
	machine.changeSettings(order, plugs);
	string encrypted = machine.encryptString("This is encrypted text");
	cout << encrypted << endl;
	machine.changeSettings(order, plugs);
	cout << machine.encryptString(encrypted) << endl;

	return 0;
}