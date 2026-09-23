#include <iostream>

#include "../include/enigma.hpp"
#include "../include/rotor.hpp"
using namespace std;

int main()
{
	Enigma machine;
	constexpr int order[3] = {1, 2, 3};
	constexpr int plugs[3] = {0, 0, 0};
	// // constexpr char board[10][2] = {};
	//
	machine.changeSettings(order, plugs);
	const string encrypted = machine.encryptString("This is encrypted text");
	cout << encrypted << endl;
	machine.changeSettings(order, plugs);
	cout << machine.encryptString(encrypted) << endl;

	return 0;
}