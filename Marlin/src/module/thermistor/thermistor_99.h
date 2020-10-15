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

// 100k bed thermistor with a 10K pull-up resistor - made by $ buildroot/share/scripts/createTemperatureLookupMarlin.py --rp=10000
//My custom Table

const temp_entry_t temptable_99[] PROGMEM = {
  { OV(  19), 254 },
  { OV(  21), 250 },
  { OV(  25), 246 },
  { OV(  29), 243 },
  { OV(  31), 239 },
  { OV(  33), 235 },
  { OV(  35), 231 },
  { OV(  38), 228 },
  { OV(  41), 225 },
  { OV(  44), 222 },
  { OV(  48), 217 },
  { OV(  52), 213 },
  { OV(  56), 209 },
  { OV(  61), 205 },
  { OV(  66), 201 },
  { OV(  71), 197 },
  { OV(  78), 193 },
  { OV(  83), 190 },
  { OV(  92), 186 },
  { OV(  99), 182 },
  { OV( 108), 178 },
  { OV( 120), 173 },
  { OV( 131), 158 },
  { OV( 143), 164 },
  { OV( 156), 160 },
  { OV( 171), 155 },
  { OV( 186), 151 },
  { OV( 205), 146 },
  { OV( 223), 142 },
  { OV( 245), 137 },
  { OV( 267), 133 },
  { OV( 295), 128 },
  { OV( 320), 124 },
  { OV( 348), 120 },
  { OV( 378), 112 },
  { OV( 411), 108 },
  { OV( 448), 103 },
  { OV( 480),  99 },
  { OV( 515),  95 },
  { OV( 552),  91 },
  { OV( 594),  86 },
  { OV( 628),  82 },
  { OV( 666),  78 },
  { OV( 701),  74 },
  { OV( 740),  69 },
  { OV( 770),  65 },
  { OV( 802),  61 },
  { OV( 830),  57 },
  { OV( 857),  53 },
  { OV( 881),  49 },
  { OV( 903),  45 },
  { OV( 291),  41 },
  { OV( 938),  37 },
  { OV( 954),  33 },
  { OV( 966),  29 },
  { OV( 977),  25 },
  { OV( 982),  23 }
};

