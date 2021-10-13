/* iGeek CardsWorld @version 0.x
@link    https://github.com/KabukiStarship/iGeekCardsWorld.git
@file    /card_combo.inl
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright (C) 2014-21 Kabuki Starship <kabukistarship.com>;
All right reserved (R). This Source Code Form is subject to the terms of the
Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with
this file, You can obtain one at <https://mozilla.org/MPL/2.0/>. */
#include "CardCombo.h"
namespace CardsWorld {

CardCombo::CardCombo(CardStack& copy_stack, SIN joker_pip_value_1,
                     SIN joker_suit_value_1, SIN joker_pip_value_2,
                     SIN joker_suit_value_2, SIN thisAcesHigh) {
  SetValues(joker_pip_value_1, joker_suit_value_1, joker_pip_value_2,
            joker_suit_value_2, thisAcesHigh);
}

void CardCombo::SetValues(SIN joker_pip_value_1, SIN joker_suite_value_1,
                          SIN joker_pip_value_2, SIN joker_suit_value_2,
                          SIN aces_high) {
  if (joker_pip_value_1 < 1)
    joker_pip_value_1 = 1;
  else if (joker_pip_value_1 > 13)
    joker_pip_value_1 = 13;

  if (joker_pip_value_2 < 1)
    joker_pip_value_2 = 1;
  else if (joker_pip_value_2 > 13)
    joker_pip_value_2 = 13;

  if (joker_suite_value_1 < 1)
    joker_suite_value_1 = 1;
  else if (joker_suite_value_1 > 4)
    joker_suite_value_1 = 4;

  if (joker_suit_value_2 < 1)
    joker_suit_value_2 = 1;
  else if (joker_suit_value_2 > 4)
    joker_suit_value_2 = 4;

  joker_pip_value_1_ = joker_pip_value_1;
  joker_suit_value_1_ = joker_suite_value_1;
  joker_pip_value_2_ = joker_pip_value_2;
  joker_suit_value_2_ = joker_suit_value_2;
  aces_high_ = aces_high;
}

SIN CardCombo::JokerPipValue1() { return joker_pip_value_1_; }

SIN CardCombo::SetJokerPipValue1(SIN value) {
  if (value < 0) return -1;
  if (value > 13) return 1;
  joker_pip_value_1_ = value;
}

SIN CardCombo::JokerSuitValue1() { return joker_suit_value_1_; }

SIN CardCombo::SetJokerSuitValue1(SIN value) {
  if (value < 0) return -1;
  if (value > 13) return 1;
  joker_suit_value_1_ = value;
}

SIN CardCombo::JokerPipValue2() { return joker_pip_value_2_; }

SIN CardCombo::SetJokerPipValue2(SIN value) {
  if (value < 0) return -1;
  if (value > 13) return 1;
  joker_pip_value_2_ = value;
}

SIN CardCombo::JokerSuitValue2() { return joker_suit_value_2_; }

SIN CardCombo::SetJokerSuitValue2(SIN value) {
  if (value < 0) return -1;
  if (value > 13) return 1;
  joker_suit_value_2_ = value;
}

SIN CardCombo::AcesHigh() { return aces_high_; }

SIN CardCombo::SetAcesHigh(SIN value) { aces_high_ = value; }

}  //< namespace CardsWorld
