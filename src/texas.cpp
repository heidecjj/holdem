#include "texas.h"

uint32_t texas::computeHandValue(Hole h, Community c) {
	uint32_t handVal;
	AllCards allCards = AllCards();
	Hand hand = Hand();

	allCards.push_back(h[0]);
	allCards.push_back(h[1]);
	allCards.push_back(c[0]);
	allCards.push_back(c[1]);
	allCards.push_back(c[2]);
	allCards.push_back(c[3]);
	allCards.push_back(c[4]);

	if (h[0].number > h[1].number) {
	
	}
	return handVal;
}

uint32_t texas::Hand::handToValue()
{
	return uint32_t();
}

void texas::Hand::setType(HandType t) {
	type = t;
}

bool texas::Hand::operator>(Hand h2) {
	if (type > h2.type
		|| high1 > h2.high1
		|| high2 > h2.high2
		|| holeHigh > h2.holeHigh
		|| holeLow > h2.holeLow)
		return true;
	return false;
}

bool texas::Hand::operator<(Hand h2) {
	if (type < h2.type
		|| high1 < h2.high1
		|| high2 < h2.high2
		|| holeHigh < h2.holeHigh
		|| holeLow < h2.holeLow)
		return true;
	return false;
}

bool texas::Hand::operator==(Hand h2) {
	if (type == h2.type
		&& high1 == h2.high1
		&& high2 == h2.high2
		&& holeHigh == h2.holeHigh
		&& holeLow == h2.holeLow)
		return true;
	return false;
}