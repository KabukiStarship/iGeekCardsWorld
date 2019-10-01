/* Unseenia Cards @version 0.x
@link    https://github.com/kabuki-starship/unseenia.cards.git
@file    /_seams/03.blackjack.h
@author  Cale McCollough <https://cale-mccollough.github.io>
@license Copyright (C) 2014-9 Kabuki Starship <kabukistarship.com>;
All right reserved (R). This Source Code Form is subject to the terms of the
Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with
this file, You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#pragma once
#include <_config.h>

#include "../../script2/string.hpp"

#if SEAM == UNSEENIA_CARDS_BLACKJACK
#include "_debug.inl"
#else
#include "_release.inl"
#endif

using namespace _;

namespace unseenia {
namespace cards {

inline const CH1* Uniprinter(const CH1* args) {
#if SEAM >= UNSEENIA_CARDS_BLACKJACK
  A_TEST_BEGIN;

  D_COUT(Headingf("\nLets play Blackjack!"));

  auto pack = Deck();

  BlackjackPlayer player("Player", 100);
  BlackjackDealer dealer;

  //
  BOL again = true;
  string input = "";

  do {
    dealer.startNewGame();

    do {
      cout << dealer.toString();

      cout << Linef("\n~~~");

      cout << dealer.GetPlayer(1).ToString();

      cout << Linef("\n~~~");

      BOL invalid_input = false;

      do {
        cout << "Hit or hold?";
        getline(cin, input);

        if (input == "hit") {
          invalid_input = true;

          if (stock.IsEmpty()) stock.Shuffle();

          player.Hand().AddToHand(stock.NextCard());
          invalid_input = true;
        } else if (input == "hold") {
          again = false;
        } else if (input == "quit") {
          invalid_input = true;
          again = false;
        } else {
          cout << "Error: invalid input. Please type 'hit', 'hold', 'quit'";
        }
      }

    } while (again);

    dealer.PlayHand();

    int hand_comparison = player.Hand().Compare(dealer);

    // calculates totals
    if () {
      cout << "      Players wins!!!";
    } else {
      if (dealer.Beats(player)) {
        cout << "      Dealer wins:(";
      }
    }
    cout << "Your Score: " << player.HandTotal()[0] << " with "
         << player.HandTotal()[1]
         << " aces ** Computers Score: " << dealer.HandTotal()[0] << " with "
         << dealer.HandTotal()[1] << " ace(s).";
    cout << "Do you want to play again?";
    getline(cin, input);
    if (input == "y" || input == "Y") again = true;
  } while (again);
#endif
  return 0;
}
}  // namespace cards
}  // namespace unseenia
