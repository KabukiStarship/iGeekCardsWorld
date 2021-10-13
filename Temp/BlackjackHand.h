/* iGeek CardsWorld @version 0.x
@link    https://github.com/KabukiStarship/unseenia.cards.git
@file    /BlackjackPlayer.h
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright (C) 2014-21 Kabuki Starship <kabukistarship.com>;
All right reserved (R). This Source Code Form is subject to the terms of the
Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with
this file, You can obtain one at <https://mozilla.org/MPL/2.0/>. */
#pragma once
#ifndef IGEEK_BLACKJACK_HAND_DECL
#define IGEEK_BLACKJACK_HAND_DECL
#include "CardStack.h"
#include "Hand.h"
namespace CardsWorld {

/* Class that represents a Hand in Blackjack.
A blackjack hand has a minmum of 2 cards. */
class BlackjackHand : public Hand {
 public:
  /* Constructor.
  The game of blackjack starts with each player having two cards. */
  BlackjackHand(CardStack& stock);

  /* Compares this hand to the other hand.
  @return Returns 0 if they are equal, 1 if this hand is greater than    the
  other Hand, and -1 if the other Hand is greater than this Hand. */
  SIN Compare(const Hand& other);

  /* Returns the HighLowScore. */
  _::AStack<CardCombo> Combos();

  /* Adds the new Card to this Hand. */
  SIN AddCard(Card* new_card);

  /* Prints this object to the Printer. */
  template <typename Printer>
  Printer& PrintTo(Printer& o) {}
};
}  // namespace CardsWorld
#endif
