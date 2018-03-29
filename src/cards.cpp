#include "cards.h"

cards::Suit cards::getCardSuit(Card c)
{
	return c >> cards::suitShift;
}

cards::Number cards::getCardNumber(Card c)
{
	return c & cards::numberMask;
}

std::string cards::suitToString(Suit s)
{
	switch (s) {
		case cards::diamond: return "D";
		case cards::heart: return "H";
		case cards::club: return  "C";
		case cards::spade: return "S";
		default: return "?";
	}
}

std::string cards::numberToString(Number n)
{
	if (n >1 && n < cards::jack)
		return std::to_string(n);
	
	switch (n) {
		case cards::ace: return "A";
		case cards::king: return "K";
		case cards::queen: return "Q";
		case cards::jack: return "J";
		default: break;
	}
	return "?";
}

std::string cards::cardToString(Card c)
{
	return cards::numberToString(cards::getCardNumber(c)) + "-" + cards::suitToString(cards::getCardSuit(c));
}
