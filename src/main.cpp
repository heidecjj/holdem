#include <iostream>
#include <stdio.h>
#include "cards.h"

int main() {
	std::cout << "testing get suit" << std::endl;
	cards::Card card = 0b01001100;
	std::cout << "card: " << cards::cardToString(card) << std::endl;
	
	return 0;
}