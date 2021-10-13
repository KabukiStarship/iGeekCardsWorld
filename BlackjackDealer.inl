/* iGeek CardsWorld @version 0.x
@link    https://github.com/KabukiStarship/unseenia.cards.git
@file    /BlackjackDealer.inl
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright (C) 2014-21 Kabuki Starship <kabukistarship.com>;
All right reserved (R). This Source Code Form is subject to the terms of the
Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with
this file, You can obtain one at <https://mozilla.org/MPL/2.0/>. */
#include "BlackjackCardCombo.h"
#include "BlackjackDealer.h"
namespace CardsWorld {

BlackjackDealer::BlackjackDealer(const CHR* name)
    : Player((!name) ? "Dealer" : name, points_init_),
      Dealer(points_init_, starting_ante_, min_bet_, min_cards_per_hand_,
             max_cards_per_hand_, player_count_max_) {}
}  // namespace CardsWorld
