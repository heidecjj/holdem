#pragma once
#ifndef TEXAS_H
#define TEXAS_H

#include <stdint.h>
#include <vector>
#include "cards.h"

namespace texas {
	typedef uint8_t HandType;

	static const HandType royalFlush = 0b1110;
	static const HandType straightFlush = 0b1100;
	static const HandType fourKind = 0b1011;
	static const HandType fullHouse = 0b1010;
	static const HandType flush = 0b1000;
	static const HandType straight = 0b0100;
	static const HandType threeKind = 0b0011;
	static const HandType pair = 0b0010;
	static const HandType high = 0b0001;

	typedef cards::Card Hole[2];

	typedef cards::Card Community[5];

	typedef std::vector<cards::Card> AllCards;

	class Hand {
		HandType type : 4;
		cards::Number high1 : 4;
		cards::Number high2 : 4;
		cards::Number holeHigh : 4;
		cards::Number holeLow : 4;

		uint32_t handToValue();
		void setType(HandType t);
		bool operator > (Hand h2);
		bool operator == (Hand h2);
		bool operator < (Hand h2);
	};

	uint32_t computeHandValue(Hole h, Community c);
	bool containsStraight(AllCards cards);
}

#endif