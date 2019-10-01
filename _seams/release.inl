/* Unseenia Cards @version 0.x
@link    https://github.com/kabuki-starship/unseenia.cards.git
@file    /_seams/release.h
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright (C) 2014-9 Kabuki Starship <kabukistarship.com>;
All right reserved (R). This Source Code Form is subject to the terms of the
Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with
this file, You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#pragma once
#include <_config.h>

#if SEAM == UNSEENIA_CARDS_RELEASE
#include "_debug.inl"
#else
#include "_release.inl"
#endif

using namespace _;

namespace unseenia {
namespace cookbook {
inline const CH1* Release(CH1* seam_log, CH1* seam_end, const CH1* args) {
#if SEAM >= UNSEENIA_CARDS_RELEASE
  TEST_BEGIN;

  PRINT_HEADING("Testing Foo fun.");

#endif
  return 0;
}
}  // namespace cookbook
}  // namespace unseenia
