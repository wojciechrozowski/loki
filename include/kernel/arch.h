/*
 loki 0.01
 Copyright (C) 2014 Wojciech R�owski

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License along
 with this program; if not, write to the Free Software Foundation, Inc.,
 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
	
	File: include/kernel/arch.h
	Description: simple arch dependencies header's chooser
*/ 
#ifndef _KERNEL_ARCH_H
#define _KERNEL_ARCH_H
#ifdef i386
#include <kernel/arch/i386/vga.h>
#include <kernel/arch/i386/screen.h>
#include <kernel/arch/i386/io.h>
#include <kernel/arch/i386/descriptor_tables.h>
#endif
#endif