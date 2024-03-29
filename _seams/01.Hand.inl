/* iGeek CardsWorld @version 0.x
@link    https://github.com/KabukiStarship/unseenia.cards.git
@file    /_Seams/01.Hand.h
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright (C) 2014-21 Kabuki Starship <kabukistarship.com>;
All right reserved (R). This Source Code Form is subject to the terms of the
Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with
this file, You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#pragma once
#include <_Config.h>

#include "cards/Hand.h"

#if SEAM == IGEEK_CARDSWORD_HAND
#include <Script2/_Debug.inl>
#else
#include <Script2/_Release.inl>
#endif



namespace unseenia {
namespace cards {
inline const CHA* Uniprinter(const CHA* args) {
#if SEAM >= IGEEK_CARDSWORD_HAND
  A_TEST_BEGIN;
  D_COUT("Creating deck...");

  Deck pack(Deck::Culture Deck::kFrench, Deck::kAcesHighOrLow,
            Deck::kDoesNotContainJokers);

  CardStack deck = CardStack(pack);

  deck.Shuffle();

  D_COUT("Creating playerHand");

  Hand playerHand(deck.TakeNextCard(), deck.TakeNextCard()),
      dealersHand(deck.TakeNextCard(), deck.TakeNextCard());

  D_COUT("Testing string Hard::tostring ()...");
  D_COUT(playerHand.tostring);
  D_COUT(dealersHand.tostring);

  D_COUT(
      "Creating Hands Player{Ace of Hearts, Ace of Clubs) Dealer{ King of "
      "Hearts, Nine of Diamonds } ...");

  players_hand.SetCards();

#endif
  return 0;
}

}  // namespace cards
}  // namespace unseenia
