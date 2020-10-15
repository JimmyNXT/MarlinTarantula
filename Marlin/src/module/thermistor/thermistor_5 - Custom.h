/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

// R25 = 100 kOhm, beta25 = 4267 K, 4.7 kOhm pull-up
// 100k ParCan thermistor (104GT-2)
// ATC Semitec 104GT-2/104NT-4-R025H42G (Used in ParCan)
// Verified by linagee. Source: http://shop.arcol.hu/static/datasheets/thermistors.pdf
// Calculated using 4.7kohm pullup, voltage divider math, and manufacturer provided temp/resistance
const temp_entry_t temptable_5[] PROGMEM = {
  { OV(   1), 713 },
  { OV(   4), 300 }, // top rating 300C
  { OV(  18), 290 },
  { OV(  21), 280 },
  { OV(  24), 270 },
  { OV(  28), 260 },
  { OV(  32), 250 },
  { OV(  38), 240 },
  { OV(  45), 230 },
  { OV(  53), 220 },
  { OV(  63), 210 },
  { OV(  76), 200 },
  { OV(  91), 190 },
  { OV( 110), 180 },
  { OV( 133), 170 },
  { OV( 162), 160 },
  { OV( 197), 150 },
  { OV( 240), 140 },
  { OV( 290), 130 },
  { OV( 349), 120 },
  { OV( 417), 110 },
  { OV( 492), 100 },
  { OV( 570),  90 },
  { OV( 651),  80 },
  { OV( 727),  70 },
  { OV( 796),  60 },
  { OV( 856),  50 },
  { OV( 905),  40 },
  { OV( 943),  30 },
  { OV( 970),  20 },
  { OV( 989),  10 },
  { OV(1002),   0 }
};
