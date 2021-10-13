/* iGeek CardsWorld @version 0.x
@link    https://github.com/KabukiStarship/iGeekCardsWorld.git
@file    /_Seams/release.h
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright (C) 2014-21 Kabuki Starship <kabukistarship.com>;
All right reserved (R). This Source Code Form is subject to the terms of the
Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with
this file, You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#pragma once
#include <_Config.h>

#if SEAM == IGEEK_CARDSWORD_RELEASE
#include "_Debug.inl"
#else
#include "_Release.inl"
#endif



namespace unseenia {
namespace cookbook {
inline const CHA* Release(const CHA* args) {
#if SEAM >= IGEEK_CARDSWORD_RELEASE
  TEST_BEGIN;

#endif
  return 0;
}
}  //< namespace cookbook
}  //< namespace unseenia
