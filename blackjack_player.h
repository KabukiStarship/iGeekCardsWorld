/* Unseenia Cards @version 0.x
@link    https://github.com/kabuki-starship/unseenia.cards.git
@file    /blackjack_player.h
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright (C) 2014-9 Kabuki Starship <kabukistarship.com>;
All right reserved (R). This Source Code Form is subject to the terms of the
Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with
this file, You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#pragma once

#ifndef UNSEENIA_BLACKJACK_PLAYER_H
#define UNSEENIA_BLACKJACK_PLAYER_H

#include <_config.h>

#include "dealer.h"

namespace unseenia {
namespace blackjack {

class BlackjackPlayer {
 public:
  /* Default Constructor. */
  BlackjackPlayer(const CHR* playerName = nullptr, SIN points_init = 10,
                  BOL is_player = true);

  /* Destructor. */
  ~BlackjackPlayer();

  /* AI function that determines if a player (usually the dealer) hits or holds.
   */
  BOL PlayOrPass(Dealer& dealer);

  /* Function that performs the logic of playing a hand. */
  void PlayHand();
};
}  // namespace blackjack
}  // namespace unseenia
#endif
