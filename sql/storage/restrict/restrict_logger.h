/*
 * The contents of this file are subject to the MonetDB Public License
 * Version 1.1 (the "License"); you may not use this file except in
 * compliance with the License. You may obtain a copy of the License at
 * http://www.monetdb.org/Legal/MonetDBLicense
 *
 * Software distributed under the License is distributed on an "AS IS"
 * basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See the
 * License for the specific language governing rights and limitations
 * under the License.
 *
 * The Original Code is the MonetDB Database System.
 *
 * The Initial Developer of the Original Code is CWI.
 * Portions created by CWI are Copyright (C) 1997-July 2008 CWI.
 * Copyright August 2008-2013 MonetDB B.V.
 * All Rights Reserved.
 */

#ifndef RESTRICT_LOGGER_H
#define RESTRICT_LOGGER_H

#include "sql_storage.h"
#include <gdk_logger.h>

extern logger *restrict_logger;

extern int su_logger_init( logger_functions *lf );
extern int ro_logger_init( logger_functions *lf );
extern int suro_logger_init( logger_functions *lf );

#endif /*RESTRICT_LOGGER_H */
