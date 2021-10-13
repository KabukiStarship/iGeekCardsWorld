/* iGeek CardsWorld @version 0.x
@link    https://github.com/KabukiStarship/iGeekCardsWorld.git
@file    /Player.h
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright (C) 2014-21 Kabuki Starship <kabukistarship.com>;
All right reserved (R). This Source Code Form is subject to the terms of the
Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with
this file, You can obtain one at <https://mozilla.org/MPL/2.0/>. */
#ifndef IGEEK_CARDSWORD_PLAYER_DECL
#define IGEEK_CARDSWORD_PLAYER_DECL
#include <Script2/String.hpp>
#include "CardStack.h"
#include "Hand.h"
namespace CardsWorld {

class Player {
  AStrand<> name_;   //< Player's name.
  SIN win_count_,    //< Number of wins.
      point_count_;  //< Number of points.
  Hand hand_;        //< The cards in the player's hand.

 public:
  /* Default Constructor. */
  Player(const CHR* name = "You", SIN points_init_ = 10, BOL is_player = false);

  /* Does nothing. */
  virtual ~Player() {}

  /* Virtual function that determines if this Player plays, or passes. */
  virtual BOL PlayOrPass(Hand& other) = 0;

  /* Virtual function that performs a Player's turn. */
  virtual void PlayHand() = 0;

  /* Virtual function that performs the discard action.
  @return AStack<Card*>. */
  virtual Autoject Discard();

  /* Gets the name_. */
  const CHR* Name();

  /* Sets the name_ to the new name. */
  void SetName(const CHR* name);

  /* Returns the player's hand. */
  Hand& Hand();

  /* Sets the hand to the hand. */
  void HandSet(Hand& hand);

  /* Returns the point total. */
  SIN PointsCount();

  /* Adds a specified point_count to the players point total.
  @return Returns 0 upon success, and -1 if point_count is less than 1. */
  SIN PointsAdd(SIN num_points);

  /* Resets the win_count to 0. */
  void ResetWins();

  /* Returns the number of wins. */
  SIN WinCount();

  /* Adds a win to the players win_count. */
  void WinAdd();

  /* Resets the number of wins to 0. */
  void HandDeal(Hand& hand);

  /* Prints this object to the Printer. */
  template <typename Printer>
  Printer& PrintTo(Printer& o) {
    o << "Player: " << name << "\npoint_count: " << point_count
      << "\nnumWindows: " << win_count << "\n"
      << Linef("\n---");

    return o << hand.PrintTo<COut>(cout);
  }
};

}  //< namespace CardsWorld

#endif
