/* iGeek CardsWorld @version 0.x
@link    https://github.com/KabukiStarship/unseenia.cards.git
@file    /BlackjackCardCombo.h
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright (C) 2014-21 Kabuki Starship <kabukistarship.com>;
All right reserved (R). This Source Code Form is subject to the terms of the
Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with
this file, You can obtain one at <https://mozilla.org/MPL/2.0/>. */
#pragma once
#ifndef IGEEK_BLACKJACK_CARDCOMBO_DECL
#define IGEEK_BLACKJACK_CARDCOMBO_DECL
#if SEAM >= IGEEK_BLACKJACK_CONSOLE
#include "CardCombo.h"
namespace CardsWorld {

/* Class that represents a CardCombo in a game.
There are two major things that will effect a combination's rank besides
suit rank; the presence of jokers, and if aces are high or low.
*/
class BlackjackCardCombo : public CardCombo {
 public:
  /* Default constructor. */
  BlackjackCardCombo(CardStack& copy_stack, SIN aces_high_low_orna);

  // Function that returns the point value based on the ace value.
  SIN PointValue();
};
}  // namespace CardsWorld
#endif
