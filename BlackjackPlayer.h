/* iGeek CardsWorld @version 0.x
@link    https://github.com/KabukiStarship/unseenia.cards.git
@file    /BlackjackPlayer.h
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright (C) 2014-21 Kabuki Starship <kabukistarship.com>;
All right reserved (R). This Source Code Form is subject to the terms of the
Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with
this file, You can obtain one at <https://mozilla.org/MPL/2.0/>. */
#pragma once
#ifndef IGEEK_BLACKJACK_PLAYER_H
#define IGEEK_BLACKJACK_PLAYER_H
#include "Dealer.h"
namespace CardsWorld {

class BlackjackPlayer {
 public:
  /* Default Constructor. */
  BlackjackPlayer(const CHR* playerName = nullptr, SIN points_init_ = 10,
                  BOL is_player = true);

  /* Destructor. */
  ~BlackjackPlayer();

  /* AI function that determines if a player (usually the dealer) hits or holds.
   */
  BOL PlayOrPass(Dealer& dealer);

  /* Function that performs the logic of playing a hand. */
  void PlayHand();
};
}  // namespace CardsWorld
#endif
