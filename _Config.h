/* iGeek CardsWorld @version 0.x
@link    https://github.com/KabukiStarship/unseenia.cards.git
@file    /_Config.h
@author  Cale McCollough <https://cookingwithcale.org>
@license Copyright (C) 2014-21 Kabuki Starship <kabukistarship.com>;
All right reserved (R). This Source Code Form is subject to the terms of the
Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with
this file, You can obtain one at <https://mozilla.org/MPL/2.0/>. */

#pragma once

#ifndef MODULE_CONFIG_DECL
#define MODULE_CONFIG_DECL 1

#include <Script2/_ConfigHeader.inl>

#define SEAM SCRIPT2_LIST

#define ASSEMBLY_TYPE ASSEMBLE_EXE 1
#define SCRIPT2_RUN_TESTS YES_0

#define ALU_SIZE ALU_64_BIT
#define CPU_ENDIAN CPU_ENDIAN_LITTLE

#define USING_CONSOLE YES_0

#define USING_UTF8 YES_0
#define USING_UTF16 YES_0
#define USING_UTF32 YES_0
#define LARGEST_CHAR STRING_TYPE_1
#define USING_STR STRING_TYPE_1

#define USING_FP 8
#define USING_FP4 YES_0
#define USING_FP8 YES_0

#define USING_16_BYTE_POD_TYPES NO_0

#include <Script2/_ConfigFooter.inl>

#endif
