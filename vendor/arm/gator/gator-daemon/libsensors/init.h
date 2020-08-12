/*
    init.h - Part of libsensors, a Linux library for reading sensor data.
    Copyright (C) 2007-2010  Jean Delvare <jdelvare@suse.de>

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
    MA 02110-1301 USA.
*/

#ifndef LIB_SENSORS_INIT_H
#define LIB_SENSORS_INIT_H

#include "data.h"

void sensors_free_expr(sensors_expr *expr);

#endif /* def LIB_SENSORS_INIT_H */
