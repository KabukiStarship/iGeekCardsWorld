/* iGeek CardsWorld @version 0.x
@link    https://github.com/KabukiStarship/iGeekCardsWorld.git
@file    /blackjack_card_combo.inl
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright (C) 2014-21 Kabuki Starship <kabukistarship.com>;
All right reserved (R). This Source Code Form is subject to the terms of the
Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with
this file, You can obtain one at <https://mozilla.org/MPL/2.0/>. */
#include <_Config.h>
#if SEAM >= IGEEK_BLACKJACK_CONSOLE
#include "BlackjackCardCombo.h"
namespace CardsWorld {

BlackjackCardCombo::BlackjackCardCombo(CardStack& copy_stack,
                                       SIN aces_high_low_orna)
    : CardCombo(copy_stack, aces_high_low_orna) {
  ValuesSet(0, 1, 0, 1, aces_high_low_orna);
}

SIN BlackjackCardCombo::PointValue() {
  SIN total = 0;
  Card* current_card;
  for (SIN i = 0; i < CardCount(); ++i) {
    SIN current_pip_value = current_card->PipValue();

    if (current_pip_value == 1) {
      // If its an ace.
      if (AcesHigh())
        total += 10;
      else
        total += 1;
    } else // Add the point to the score like normal.
      total += current_card->PointValue();
  }
  return total;
}
}  //< namespace CardsWorld
