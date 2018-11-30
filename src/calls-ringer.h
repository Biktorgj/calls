/*
 * Copyright (C) 2018 Purism SPC
 *
 * This file is part of Calls.
 *
 * Calls is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Calls is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Calls.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Author: Bob Ham <bob.ham@puri.sm>
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#ifndef CALLS_RINGER_H__
#define CALLS_RINGER_H__

#include "calls-provider.h"

G_BEGIN_DECLS

#define CALLS_TYPE_RINGER (calls_ringer_get_type ())

G_DECLARE_FINAL_TYPE (CallsRinger, calls_ringer, CALLS, RINGER, GObject);

CallsRinger *calls_ringer_new (CallsProvider *provider);

G_END_DECLS

#endif /* CALLS_RINGER_H__ */