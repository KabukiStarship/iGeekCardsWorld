/* iGeek CardsWorld @version 0.x
@link    https://github.com/KabukiStarship/iGeekCardsWorld.git
@file    /Blackjack.h
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright 2014-21 (C) Kabuki Starship <kabukistarship.com>; all rights
reserved (R). This Source Code Form is subject to the terms of the Mozilla
Public License, v. 2.0. If a copy of the MPL was not distributed with this file,
You can obtain one at <https://mozilla.org/MPL/2.0/>. */
#pragma once
#ifndef IGEEK_CARDSWORDWORLD_DECL
#define IGEEK_CARDSWORDWORLD_DECL
#include "CardStack.h"
#include "Hand.h"
namespace CardsWorld {

/* Class that represents a Hand in Blackjack.
A blackjack hand has a minmum of 2 cards. */
class BlackjackHand : public Hand {
 public:
  /* Constructor.
      The game of blackjack starts with each player having two cards. */
  BlackjackHand(CardStack& stock);

  /* Compares this hand to the other hand.
  @return Returns 0 if they are equal, 1 if this hand is greater than
  the other Hand, and -1 if the other Hand is greater than this Hand. */
  int Compare(const Hand& other);

  /* Returns the HighLowScore.
  @return AStack<CardCombo> */
  Autoject HandCombos();

  /* Adds the new Card to this Hand. */
  int AddCard(Card* new_card);

  // Resturns a _::AString representation of this object.
  _::AString ToString();
};

class BlackjackCardCombo : public CardCombo {
 public:
  /* Default constructor. */
  BlackjackCardCombo(CardStack& copy_stack, int aces_high_low_orna);

  // Function that returns the point value based on the ace value.
  int GetPointValue();
};

/* A class that represnts a dealer in a card game.
A dealer has the Deck of cards, but is not neccissaraly a player. A dealer needs
to keep track of all of the Players. A BlackjackDealer is both a Player and a
Dealer at the same time. */
class BlackjackDealer : public Player, public Dealer {
 public:
  enum {
    DeckCount = 1,               //< The number of decks for this game.
    DeckSize = 52,               //< The number of cards in the Deck.
    PointsInit = 999999,         //< The dealers starting points.
    AnteInit = 5,                //< The starting ante.
    BetMin = 1,                  //< The minimum bet.
    HandCardCountMin = 2,        //< The minimum number of cards in a hand.
    HandCardCountMax =
        Deck::CardsCountDefault, //< The maximum number of cards in a hand.
    PlayersCountMax = 2          //< The maximum number of players.
  };

  /* Constructor.
  This is why we like polymorphism. Notice all we have is a single
  constructor here, because all of our code we are recycling from the Dealer
  class.*/
  BlackjackDealer();
};

/* A player in the game Blackjack. */
class BlackjackPlayer {
 public:
  /* Default Constructor. */
  BlackjackPlayer(_::AString playerName = "You", ISN startPoints = 10,
                  BOL playerOrDealer);

  // Destructor.
  ~BlackjackPlayer();

  /* AI function that determines if a player (usually the dealer) hits or holds.
   */
  bool PlayOrPass(Dealer& dealer);

  // Function that performs the logic of playing a hand.
  void PlayHand();
};

}  //< namespace CardsWorld
#endif
