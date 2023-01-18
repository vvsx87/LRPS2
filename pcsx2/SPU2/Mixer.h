/*  PCSX2 - PS2 Emulator for PCs
 *  Copyright (C) 2002-2020  PCSX2 Dev Team
 *
 *  PCSX2 is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU Lesser General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  PCSX2 is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with PCSX2.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

struct StereoOut16
{
	static StereoOut16 Empty;

	s16 Left;
	s16 Right;

	StereoOut16() : Left(0), Right(0) { }
	StereoOut16(s16 left, s16 right) : Left(left), Right(right) { }
};

struct StereoOut32
{
	static StereoOut32 Empty;

	s32 Left;
	s32 Right;

	StereoOut32() : Left(0), Right(0) { }
	StereoOut32(s32 left, s32 right) : Left(left), Right(right) { }
};

extern void SPU2_Mix(void);
extern s32 clamp_mix(s32 x, u8 bitshift);

extern StereoOut32 clamp_mix(const StereoOut32& sample, u8 bitshift = 0);
