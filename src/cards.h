#pragma once
#ifndef CARDS_H
#define CARDS_H

#include <stdint.h>
#include <string>

namespace hand {
	typedef uint8_t Hole[2];

	typedef uint8_t Community[5];

	uint32_t computeHandValue(Hole h, Community c);
}

namespace cards {
	typedef uint8_t Card;
	typedef uint8_t Suit;
	typedef uint8_t Number;

	static const uint8_t diamond = 0;
	static const uint8_t heart = 1;
	static const uint8_t club = 2;
	static const uint8_t spade = 3;

	static const uint8_t ace = 14;
	static const uint8_t king = 13;
	static const uint8_t queen = 12;
	static const uint8_t jack = 11;

	static const uint8_t numberMask = 0b00111111;
	static const uint8_t suitShift = 6;

	Suit getCardSuit(Card c);
	Number getCardNumber(Card c);
	std::string suitToString(Suit s);
	std::string numberToString(Number n);
	std::string cardToString(Card c);
}

#endif