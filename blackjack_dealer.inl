/* Unseenia Cards @version 0.x
@link    https://github.com/kabuki-starship/unseenia.cards.git
@file    /blackjack_dealer.inl
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright (C) 2014-9 Kabuki Starship <kabukistarship.com>;
All right reserved (R). This Source Code Form is subject to the terms of the
Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with
this file, You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#include "blackjackcardcombo.h"
#include "blackjackdealer.h"

using namespace unseenia::cards;

BlackjackDealer::BlackjackDealer(const CHR* name)
    : Player((!name) ? "Dealer" : name, startingPoints),
      Dealer(startingPoints, starting_ante_, min_bet_, min_cards_per_hand_,
             max_cards_per_hand_, maxNumPlayer) {}
