#include "gtest/gtest.h"
#include "../src/cards.h"

TEST(SuitString, Valid) {
  EXPECT_EQ(cards::suitToString(cards::diamond), "D");
  EXPECT_EQ(cards::suitToString(cards::heart), "H");
  EXPECT_EQ(cards::suitToString(cards::club), "C");
  EXPECT_EQ(cards::suitToString(cards::spade), "S");
}

TEST(SuitString, Invalid) {
  for (int i = 0; i < 256; i++) {
    if (cards::diamond != i
        && cards::heart != i
        && cards::club != i
        && cards::spade != i) {
      EXPECT_EQ(cards::suitToString(i), "?");
    }
  }
}


TEST(NumberString, Valid) {
  EXPECT_EQ(cards::numberToString(cards::ace), "A");
  EXPECT_EQ(cards::numberToString(cards::king), "K");
  EXPECT_EQ(cards::numberToString(cards::queen), "Q");
  EXPECT_EQ(cards::numberToString(cards::jack), "J");
}

TEST(NumberString, Invalid) {
  for (int i = 0; i < 256; i++) {
    if (i < 2 || i > cards::ace) {
      EXPECT_EQ(cards::numberToString(i), "?");
    }
  }
}