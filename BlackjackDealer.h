/* iGeek CardsWorld @version 0.x
@link    https://github.com/KabukiStarship/iGeekCardsWorld.git
@file    /BlackjackDealer.h
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright (C) 2014-21 Kabuki Starship <kabukistarship.com>;
All right reserved (R). This Source Code Form is subject to the terms of the
Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with
this file, You can obtain one at <https://mozilla.org/MPL/2.0/>. */
#pragma once
#ifndef IGEEK_CARDSWORD_BLACKJACKDEADER_DECL
#define IGEEK_CARDSWORD_BLACKJACKDEADER_DECL
#include <_Config.h>
//
#include "Dealer.h"
#include "Deck.h"
#include "Player.h"
namespace CardsWorld {
/* A class that represnts a dealer in a card game.
A dealer has the Deck of cards, but is not neccissaraly a player. A dealer
needs to keep track of all of the Players. A BlackjackDealer is both a Player
and a Dealer at the same time. */
class BlackjackDealer : public Player, public Dealer {
 public:
  static const SIN deck_count_ = 1, //< The number of decks for this game.
      deck_size_ = 52,              //< The number of cards in the Deck.
      points_init_ = 999999,        //< The dealers starting points.
      starting_ante_ = 5,           //< The starting ante_.
      min_bet_ = 1,                 //< The minimum bet.
      min_cards_per_hand_ = 2,      //< The minimum number of cards in a hand.
      max_cards_per_hand_ =
          Deck::CardCountDefault,   //< The maximum number of cards in a hnd.
      player_count_max_ = 2;        //< The maximum number of players.

  /* */
  BlackjackDealer(const CHR* name = nullptr);
};
}  //< namespace CardsWorld
#endif
