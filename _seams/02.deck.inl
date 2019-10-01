/* Unseenia Cards @version 0.x
@link    https://github.com/kabuki-starship/unseenia.cards.git
@file    /_seams/02.deck.h
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright (C) 2014-9 Kabuki Starship <kabukistarship.com>;
All right reserved (R). This Source Code Form is subject to the terms of the
Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with
this file, You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#pragma once
#include <_config.h>

#include "t_string.h"

#if SEAM == UNSEENIA_CARDS_DECK
#include "_debug.inl"
#else
#include "_release.inl"
#endif

using namespace _;

namespace unseenia {
namespace cards {

inline const CH1* Uniprinter(const CH1* args) {
#if SEAM >= UNSEENIA_CARDS_DECK
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
