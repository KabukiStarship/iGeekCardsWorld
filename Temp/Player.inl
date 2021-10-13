/* iGeek CardsWorld @version 0.x
@link    https://github.com/KabukiStarship/unseenia.cards.git
@file    /player.inl
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright (C) 2014-21 Kabuki Starship <kabukistarship.com>;
All right reserved (R). This Source Code Form is subject to the terms of the
Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with
this file, You can obtain one at <https://mozilla.org/MPL/2.0/>. */
#include "Player.h"
namespace CardsWorld {

Player::Player(const CHR* name, SIN points_init_)
    : name_(name),
      win_count_(0),
      point_count_(points_init_ < 1 ? 1 : points_init_),
      hand_(Hand()) {}

const CHR* Player::Name() { return name_; }

void Player::SetName(const CHR* name) {
  if (!name) return;
  name_ = name;
}

Hand& Player::Hand() { return hand_; }

void Player::HandSet(Hand& hand) { hand_ = hand; }

SIN Player::PointsCount() { return point_count_; }

SIN Player::PointsAdd(SIN num_points) {
  SIN point_count = point_count_;
  point_count += num_points;
  point_count_ = point_count;
  return point_count;
}

SIN Player::WinCount() { return win_count_; }

void Player::WinAdd() { ++win_count_; }

void Player::ResetWins() { win_count_ = 0; }

void Player::HandDeal(Hand& hand) { hand_ = hand; }
}  // namespace CardsWorld
