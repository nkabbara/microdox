/*
Copyright 2020 Cole Smith <cole@boadsource.xyz>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "quantum.h"

#define LAYOUT_split_3x5_3(\
  k01, k02, k03, k04, k05,    k45, k44, k43, k42, k41, \
  k11, k12, k13, k14, k15,    k55, k54, k53, k52, k51, \
  k21, k22, k23, k24, k25,    k65, k64, k63, k62, k61, \
            k33, k34, k35,    k75, k74, k73            \
  ) \
  { \
    { k01, k02, k03, k04, k05 }, \
    { k11, k12, k13, k14, k15 }, \
    { k21, k22, k23, k24, k25 }, \
    { KC_NO,KC_NO, k33, k34, k35 }, \
    { k41, k42, k43, k44, k45 }, \
    { k51, k52, k53, k54, k55 }, \
    { k61, k62, k63, k64, k65 }, \
    { KC_NO, KC_NO, k73, k74, k75 } \
  }

#define REVERSED_LAYOUT_split_3x5_3(\
 k41, k42, k43, k44, k45,    k05, k04, k03,  k02,k01, \
 k51, k52, k53, k54, k55,    k15, k14, k13,  k12,k11, \
 k61, k62, k63, k64, k65,    k25, k24, k23,  k22,k21, \
           k73, k74, k75,    k35, k34, k33            \
  ) \
  { \
    { k01, k02, k03, k04, k05 }, \
    { k11, k12, k13, k14, k15 }, \
    { k21, k22, k23, k24, k25 }, \
    { KC_NO,KC_NO, k33, k34, k35 }, \
    { k41, k42, k43, k44, k45 }, \
    { k51, k52, k53, k54, k55 }, \
    { k61, k62, k63, k64, k65 }, \
    { KC_NO, KC_NO, k73, k74, k75 } \
  }
