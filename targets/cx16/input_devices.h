/* Preliminary Commander X16 emulation ...
   Copyright (C)2019 LGB (Gábor Lénárt) <lgblgblgb@gmail.com>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA */

#ifndef __XEMU_LOCAL_COMMANDER_X16_INPUT_DEVICES_H_INCLUDED
#define __XEMU_LOCAL_COMMANDER_X16_INPUT_DEVICES_H_INCLUDED

extern int  ps2_read_kbd_port ( void );
extern void ps2_set_clock_factor ( const unsigned int cpu_hz );

#endif
