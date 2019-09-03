/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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

// R25 = 100 kOhm, beta25 = 3950 K, 10 kOhm pull-up, NTCS0603E3104FHT
const short temptable_8[][2] PROGMEM = {
 /**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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

// 100k 0603 SMD Vishay NTCS0603E3104FXT (4.7k pullup)
	{ OV(1),        938 }, //
	{ OV(31),       314 }, //314
	{ OV(35),       255 }, //Added 
	{ OV(41),       241 }, //290
	{ OV(51),       230 }, //272
	{ OV(61),       222 }, //258
	{ OV(71),       215 }, //247
	{ OV(81),       207 }, //237
	{ OV(91),       203 }, //229
	{ OV(101),      197 }, //221
	{ OV(111),      192 }, //215
	{ OV(121),      186 }, //209
	{ OV(131),      182 }, //204
	{ OV(141),      178 }, //199
	{ OV(151),      174 }, //195
	{ OV(161),      166 }, //190
	{ OV(171),      163 }, //187
	{ OV(181),      155 }, //183
	{ OV(191),      153 }, //179
	{ OV(201),      150 }, //176
	{ OV(221),      146 }, //170
	{ OV(241),      139 }, //165
	{ OV(261),      134 }, //160
	{ OV(281),      129 }, //155
	{ OV(301),      124 }, //150
	{ OV(331),      119 }, //144
	{ OV(361),      117 }, //139
	{ OV(391),      115 }, //133
	{ OV(421),      113 }, //128
	{ OV(451),      110 }, //123
	{ OV(491),      108 }, //117
	{ OV(531),      106 }, //111
	{ OV(571),      102 }, //105
	{ OV(611),      97 }, //100
	{ OV(641),      92 },  //95
	{ OV(681),      90 },  //90
	{ OV(711),      85 },  //85
	{ OV(751),      79 },  //79
	{ OV(791),      72 },  //72
	{ OV(811),      69 },  //69
	{ OV(831),      65 },  //65
	{ OV(871),      57 },  //57
	{ OV(881),      55 },  //55
	{ OV(901),      51 },  //51
	{ OV(921),      45 },  //45
	{ OV(941),      39 },  //39
	{ OV(971),      28 },  //28
	{ OV(981),      23 },  //23
	{ OV(991),      17 },  //17
	{ OV(1001),     9 },
	{ OV(1021),     -27 }
};