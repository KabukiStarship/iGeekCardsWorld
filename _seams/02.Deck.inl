/* iGeek CardsWorld @version 0.x
@link    https://github.com/KabukiStarship/unseenia.cards.git
@file    /_Seams/02.Deck.h
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright (C) 2014-21 Kabuki Starship <kabukistarship.com>;
All right reserved (R). This Source Code Form is subject to the terms of the
Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with
this file, You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#pragma once
#include <_Config.h>

#include "String.hpp"

#if SEAM == IGEEK_CARDSWORD_DECK
#include "_Debug.inl"
#else
#include "_Release.inl"
#endif



namespace unseenia {
namespace cards {

inline const CHA* Uniprinter(const CHA* args) {
#if SEAM >= IGEEK_CARDSWORD_DECK
  A_TEST_BEGIN;

  Deck deck();

  D_COUT(deck.PrintTo<COut>());

  for (SIN i = 0; i < 7; ++i) {
    D_COUT("Creating " + Deck::CardSuitCultureStrings[i] + " Deck...");
    Deck testDeck((Deck::Culture)i, Deck::kAcesLow,
                  Deck::kDoesNotContainJokers);
    D_COUT(testDeck.PrintTo<COut>(cout));
  }
  // D_COUT (testDeck.tostring ());
#endif
  return 0;
}
}  // namespace cards
}  // namespace unseenia
