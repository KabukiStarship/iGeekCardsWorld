/* iGeek CardsWorld @version 0.x
@link    https://github.com/KabukiStarship/unseenia.cards.git
@file    /_Seams/00.CardStack.h
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright (C) 2014-21 Kabuki Starship <kabukistarship.com>;
All right reserved (R). This Source Code Form is subject to the terms of the
Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with
this file, You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#pragma once
#include <_Config.h>

#include "cards/Hand.h"

#if SEAM == IGEEK_CARDSWORD_CARDSTACK
#include <Script2/_Debug.inl>
#else
#include <Script2/_Release.inl>
#endif



namespace unseenia {
namespace cards {
inline const CHA* Uniprinter(const CHA* args) {
#if SEAM >= IGEEK_CARDSWORD_CARDSTACK
  A_TEST_BEGIN;

  D_COUT("Creating testDeck...");

  Deck testDeck;

  D_COUT("Creating testPile from testDeck...");

  CardStack testPile = CardStack(testDeck);

  D_COUT(testPile<COut>(COUt().Star()));

  D_COUT("Testing CardStack::Shuffle()...");

  testPile.Shuffle();

  D_COUT(testPile.tostring());

#endif
  return 0;
}

}  // namespace cards
}  // namespace unseenia
