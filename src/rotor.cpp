//
// Created by joshu on 29/12/25.
//

#include "../include/rotor.hpp"

Rotor::Rotor(char const configuration[26])
{
	for (int i = 0; i < 26; i++)
		config[i] = configuration[i];
}
