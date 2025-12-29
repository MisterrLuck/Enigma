//
// Created by joshu on 29/12/25.
//

#ifndef ENIGMA_ROTOR_HPP
#define ENIGMA_ROTOR_HPP

struct Rotor
{
public:
	explicit Rotor(char const configuration[26]);

private:
	char config[26]{};

};

#endif //ENIGMA_ROTOR_HPP