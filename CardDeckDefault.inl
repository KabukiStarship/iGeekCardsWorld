/* iGeek CardsWorld @version 0.x
@link    https://github.com/KabukiStarship/iGeekCardsWorld.git
@file    /CardDeckDefault.inl
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright (C) 2014-21 Kabuki Starship <kabukistarship.com>;
All right reserved (R). This Source Code Form is subject to the terms of the
Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with
this file, You can obtain one at <https://mozilla.org/MPL/2.0/>. */
#include "Card.h"
namespace CardsWorld {

KabukiCard::Card() {
  face_value = 0;
  suit = 0;
  suit_string = "Empty";
}

void KabukiCard::setCard(ISN newSuit, ISN newFace) {
  suit = newSuit;
  face_value = newFace;

  switch (suit) {
    case 0:
      suit_string = " ";
      break;
    case 1:
      suit_string = "heart";
      break;
    case 2:
      suit_string = "diamond";
      break;
    case 3:
      suit_string = "club";
      break;
    case 4:
      suit_string = "spaid";
      break;
  }
  suitIcon = new ImageIcon(suit_string.concat(".jpg"));
}

void KabukiCard::SetCard(Card cardTemp) {
  suit_string = cardTemp.suit_string();
  face_value = cardTemp.face_value();
  suit_string = cardTemp.suit_string();
  suitIcon = new ImageIcon(suit_string.concat(".jpg"));
}

_::AString KabukiCard::SuitString() { return suit_string; }

ISN KabukiCard::FaceValue() { return face_value; }

ISN KabukiCard::CompareTo(Object other) {
  Card c = (Card)other;

  if (this.suit_string() == null) return 1;
  if (this.suit_string().equals(c.suit_string())) {
    if (this.face_value < c.face_value) return -1;
    if (this.face_value > c.face_value) return 1;
  } else {
    return 1;
  }
  return 0;
}

boolean KabukiCard::Equals(Card compairCard) {
  if (compairCard.compareTo(this) == 0) return true;
  return false;
}

_::AString KabukiCard::ToString() {
  _::AString card_tring;

  if (face_value == 1)
    card_tring = ("Ace of " + suit_string + ", ");
  else if (face_value == 11)
    card_tring = ("Jack of " + suit_string + ", ");
  else if (face_value == 12)
    card_tring = ("Queen of " + suit_string + ", ");
  else if (face_value == 13)
    card_tring = ("King of " + suit_string + ", ");
  else if (face_value == 0)
    card_tring = ("Empty" + ", ");
  else
    card_tring = (face_value + " of " + suit_string + ", ");
  return card_tring;
}

ISN KabukiCard::X() { return x_pos; }

void KabukiCard::XSet(ISN newX) { x_pos = newX; }

ISN KabukiCard::Y() { return y_pos; }

void KabukiCard::YSet(ISN newY) { y_pos = newY; }

/*
void KabukiCard::draw(Component g, Graphics page) {
  x_pos = x;
  y_pos = y;

  if (!suit_string.equals("Empty")) {
    page.setColor(Color.white);
    page.fillRoundRect(x_pos, y_pos, 60, 90, 15, 15);
    page.setColor(Color.black);
    page.drawRoundRect(x_pos, y_pos, 60, 90, 15, 15);
    if (face_value == 1)
      page.drawString("Ace", x_pos + 28, y_pos + 50);
    else if (face_value == 11)
      page.drawString("J", x_pos + 28, y_pos + 50);
    else {
      if (face_value == 12)
        page.drawString("Q", x_pos + 28, y_pos + 50);
      else {
        if (face_value == 13)
          page.drawString("K", x_pos + 28, y_pos + 50);
        else {
          page.drawString(Integer.ToString(face_value), x_pos + 6, y_pos + 36);
          page.drawString(Integer.ToString(face_value), x_pos + 41, y_pos + 60);
        }
      }
    }
    suitIcon.paintIcon(g, page, x + 5, y + 5);
    suitIcon.paintIcon(g, page, x + 40, y + 5);
    suitIcon.paintIcon(g, page, x + 5, y + 65);
    suitIcon.paintIcon(g, page, x + 40, y + 65);
  }
}*/

}  //< namespace CardsWorld
